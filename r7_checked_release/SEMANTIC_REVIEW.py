"""Independent bounded physical-graph checks of the supplied R7 compiler.

Uses compile_rule as the implementation under test. No supplied validity,
profile, realization, cardinality, or pruning checker is imported.
This is regression evidence, not a universal proof or Lean execution.
"""
from pathlib import Path
from itertools import product
import sys, random, math, json, hashlib
sys.dont_write_bytecode = True
ROOT = Path(__file__).resolve().parent
sys.path.insert(0, str(ROOT/'frozen'))
from general_compiler import compile_rule

rng = random.Random(20260909)
metrics = dict(compilations=0, recursive_compilations=0, positive_gain_cases=0,
               input_states_with_overlapping_coarse_families=0,
               input_states_with_conservative_masks=0, arity_zero_cases=0,
               empty_extension_cases=0, empty_rectangles_pruned=0)

def require(p, message):
    if not p:
        raise ValueError(message)

def descriptors(s):
    r = len(s)
    return tuple((a,m) for a in range(r) for m in range(1 << r)
                 if m & (1 << a) and all(not s[a][b] or not m & (1 << b) for b in range(r)))

def coarse(st, r):
    return [set().union(*(v for (b,m),v in st['Q'].items() if a == b)) for a in range(r)]

def check_state(s, st):
    ts = descriptors(s)
    require(set(st['Q']) == set(ts), 'missing normalized type')
    P = coarse(st, len(s))
    for a,F in enumerate(P):
        require(all(not st['conf'][x][y] for x in F for y in F if x != y), 'coarse independence')
        require(sum(len(Fm) for (b,m),Fm in st['Q'].items() if a == b) == len(F), 'coarse partition')
    for (a,m),F in st['Q'].items():
        require(all(not st['conf'][x][y] for x in F for y in F if x != y), 'typed independence')
        for (b,n),H in st['Q'].items():
            apart = (a == b and m != n) or not m & (1 << b) or not n & (1 << a)
            if apart:
                require(all(not st['conf'][x][y] for x in F for y in H), 'typed separation')
        for b,H in enumerate(P):
            if not m & (1 << b):
                require(all(not st['conf'][x][y] for x in F for y in H), 'avoidance invariant')
    return P

def seed(s):
    edge = bool(rng.randrange(2))
    conf = [[x == y or edge for y in range(2)] for x in range(2)]
    P = [set() for _ in s]
    positions = [(a,x) for a in range(len(s)) for x in range(2)]
    rng.shuffle(positions)
    for a,x in positions:
        if rng.random() < .65 and all(not conf[x][y] for b,H in enumerate(P)
                                     if a == b or s[a][b] for y in H):
            P[a].add(x)
    ts = descriptors(s)
    Q = {t:set() for t in ts}
    widened = False
    for a,F in enumerate(P):
        for x in F:
            actual = sum(1 << b for b,H in enumerate(P) if any(conf[x][y] for y in H))
            candidates = [m for b,m in ts if a == b and m & actual == actual]
            m = rng.choice(candidates)
            widened |= m != actual
            Q[a,m].add(x)
    metrics['input_states_with_conservative_masks'] += widened
    metrics['input_states_with_overlapping_coarse_families'] += any(P[a] & P[b] for a in range(len(s)) for b in range(a))
    state = dict(conf=conf,Q=Q)
    check_state(s,state)
    return state

def separated(s,u,v):
    return any(s[a][b] for a,b in zip(u,v))

def recipe(s,q):
    r = len(s)
    T = [[] for _ in s]
    pool = [(b,w) for b in range(r) for w in product(range(r), repeat=q)]
    rng.shuffle(pool)
    for b,w in pool:
        if rng.random() < .55 and all(separated(s,w,u) for c,row in enumerate(T)
                                     if b == c or s[b][c] for u in row):
            T[b].append(w)
    E = []
    pool = list(product(range(r),repeat=q)); rng.shuffle(pool)
    for w in pool:
        if rng.random() < .5 and all(separated(s,w,u) for u in E):
            E.append(w)
    return tuple(tuple(row) for row in T), tuple(E)

def check_node(s,children,T,target,E):
    q = len(children); r = len(s)
    ts,out = compile_rule(s,q,T,target,E)
    require(ts == descriptors(s), 'normalized enumeration')
    Ps = [check_state(s,c) for c in children]
    vertices = list(product(*(range(len(c['conf'])) for c in children)))
    ids = {v:i for i,v in enumerate(vertices)}
    conf = [[all(c['conf'][x[i]][y[i]] for i,c in enumerate(children)) for y in vertices] for x in vertices]
    def rectangle(z):
        return {ids[v] for v in product(*(c['Q'][ts[z[i]]] for i,c in enumerate(children)))}
    Q = {}
    for tag,row in zip(ts,out):
        cells = [rectangle(z) for z in row]
        value = set().union(*cells)
        weight = sum(math.prod(len(c['Q'][ts[z[i]]]) for i,c in enumerate(children)) for z in row)
        require(len(value) == weight, 'sum of products overcounts a row')
        kept = [z for z in row if all(children[i]['Q'][ts[j]] for i,j in enumerate(z))]
        metrics['empty_rectangles_pruned'] += len(row)-len(kept)
        require(set().union(*(rectangle(z) for z in kept)) == value, 'pruning changed a set')
        Q[tag] = value
    result = dict(conf=conf,Q=Q)
    actualP = check_state(s,result)
    old = [{ids[v] for word in row for v in product(*(Ps[i][a] for i,a in enumerate(word)))} for row in T]
    addition = set()
    if target is not None:
        protected = {target} | {b for b in range(r) if s[target][b]}
        for z in product(range(len(ts)),repeat=q):
            labels = tuple(ts[j][0] for j in z)
            if labels not in E:
                continue
            possible = {b for b,row in enumerate(T) if any(all(ts[z[i]][1] & (1 << a) for i,a in enumerate(word)) for word in row)}
            if possible.isdisjoint(protected):
                cell = rectangle(z)
                require(not cell & addition, 'extension cells overlap')
                addition |= cell
        require(not old[target] & addition, 'addition overlaps old target')
    for b in range(r):
        require(actualP[b] == old[b] | (addition if target == b else set()), 'coarse set semantics mismatch')
        require(len(actualP[b]) == len(old[b]) + (len(addition) if target == b else 0), 'gain count mismatch')
    metrics['compilations'] += 1
    metrics['positive_gain_cases'] += bool(addition)
    metrics['arity_zero_cases'] += q == 0
    metrics['empty_extension_cases'] += not E
    return result

for case in range(300):
    r = 1 + case % 3
    s = [[False]*r for _ in range(r)]
    for a in range(r):
        for b in range(a):
            s[a][b] = s[b][a] = bool(rng.randrange(2))
    q = case % 3
    children = [seed(s) for _ in range(q)]
    T,E = recipe(s,q)
    target = None if case % 7 == 0 else rng.randrange(r)
    if target is None: E = ()
    result = check_node(s,children,T,target,E)
    if case % 6 == 2:
        # Repeated children are separate Cartesian coordinates, never deduplicated.
        T2,E2 = recipe(s,2)
        check_node(s,[result,result],T2,rng.randrange(r),E2)
        metrics['recursive_compilations'] += 1
for q in range(3):
    require(compile_rule((),q,()) == ((),()), 'empty alphabet ordinary compilation')
require(metrics['positive_gain_cases'] > 0, 'no positive gain case')
require(metrics['input_states_with_overlapping_coarse_families'] > 0, 'no overlap case')
require(metrics['input_states_with_conservative_masks'] > 0, 'no widened mask case')
print(json.dumps(dict(status='PASS_BOUNDED_PHYSICAL_GRAPH_SEMANTICS_REVIEW',seed=20260909,
    metrics=metrics,alphabet_sizes=[1,2,3],initial_scopes=[[1,0],[2,1],[3,2]],
    recursive_scope=dict(alphabet_size=3,arity=2,repeated_same_child=True),initial_graph_vertex_count=2,
    initial_graphs='Both loopless simple graphs on two vertices, with conflict including equality',
    empty_alphabet_ordinary_arities=[0,1,2],Lean_run=False,
    universal_theorem_proved_by_this_test=False),indent=2,sort_keys=True))
