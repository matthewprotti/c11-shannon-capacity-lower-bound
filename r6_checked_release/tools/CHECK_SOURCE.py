#!/usr/bin/env python3
"""Static literal/source binding supplements, but does not replace, Lean."""
from pathlib import Path
import hashlib,json,re
W=Path(__file__).resolve().parents[1]
def need(b,s):
    if not b:raise ValueError(s)
def strip_comments(t):
    out=[];i=0;depth=0
    while i<len(t):
        if t.startswith('/-',i):depth+=1;i+=2
        elif depth and t.startswith('-/',i):depth-=1;i+=2
        elif depth:out.append('\n'if t[i]=='\n'else' ');i+=1
        elif t.startswith('--',i):
            j=t.find('\n',i)
            if j<0:break
            i=j
        else:out.append(t[i]);i+=1
    need(depth==0,'Unclosed comment');return ''.join(out)
def body(t,name):
    m=re.search(r'(?m)^def\s+'+re.escape(name)+r'\b',t);need(m is not None,'Missing definition '+name)
    tail=t[m.end():];end=re.search(r'(?m)^(?:def|theorem|lemma|end|namespace|section|variable)\b',tail)
    return tail[:end.start()]if end else tail
def lookup(t,name):
    pairs=re.findall(r'\|\s*(\d+)\s*=>\s*([^\n]*)',body(t,name))
    need([int(k)for k,v in pairs]==list(range(58)),'Lookup must enumerate the 58 indices: '+name)
    return [v.strip()for k,v in pairs]
def wordlist(t):return [[int(x)for x in re.findall(r'\d+',w)]for w in re.findall(r'!\[([^\]]*)\]',t)]
def ints(t):return [int(x)for x in re.findall(r'\d+',t)]
def check(root=W):
    f=root/'frozen';s=root/'source';b=json.loads((root/'SOURCE_BINDINGS.json').read_text())
    texts={str(p.relative_to(s)):strip_comments(p.read_text())for p in s.rglob('*.lean')}
    for name,t in texts.items():need(not re.search(r'\b(?:sorry|admit|axiom|unsafe|run_elab|run_tac)\b|implemented_by|skipKernelTC|\[extern',t),'Proof bypass token: '+name)
    base=texts['ShannonBounds/C11R6Base.lean'];tables=texts['ShannonBounds/C11R6Tables.lean'];hist=texts['ShannonBounds/C11R6History.lean'];audit=texts['C11R6_AxiomAudit.lean']
    need(lookup(base,'family')==['Letter.'+x['family']for x in b['alphabet']],'Family labels changed')
    need([int(x)for x in lookup(base,'mask')]==[x['mask']for x in b['alphabet']],'Masks changed')
    need([ints(x)for x in lookup(base,'baseLists')]==b['typed_base'],'Typed vertex lists changed')
    need([int(x)for x in lookup(base,'w0')]==b['base_weights'],'Base weights changed')
    need('abbrev Ty := Fin 58'in base,'Wrong alphabet cardinality')
    relation=' '.join(body(base,'typedSep').split())
    need(relation=='(a b : Ty) : Bool := (decide (family a = family b) && decide (mask a ≠ mask b)) || !(has a (family b)) || !(has b (family a))','Wrong typed relation')
    all_tables={}
    for d in [186,198,213]:
        raw=(f/f'compiled/C11_TYPED_d{d}.json').read_bytes();c=json.loads(raw)
        profile_raw=(f/f'certificates/C11_AP_d{d}.json').read_bytes();p=json.loads(profile_raw);record=b['cases'][str(d)]
        need(hashlib.sha256(raw).hexdigest()==record['typed_sha256']and hashlib.sha256(profile_raw).hexdigest()==record['profile_sha256'],'Frozen certificate mismatch')
        need(c['letters']==b['alphabet']and c['nodes']==record['nodes'],'Alphabet/nodes mismatch')
        need(c['N']==p['N']==record['N']and c['dimension']==p['dimension']==d,'Frozen scope mismatch')
        src=texts[f'ShannonBounds/C11R6D{d}.lean']
        need(re.fullmatch(r'\s*:\s*Nat\s*:=\s*'+c['N']+r'\s*',body(src,'N'))is not None,'Cardinality literal mismatch')
        for name,t in c['tables'].items():
            key=record['tables'][name];need(b['tables'][key]==t,'Table binding differs from original typed certificate');all_tables[key]=t
            if t['kind']=='terminal':got=wordlist(body(tables,'rows_'+key))
            else:got=[wordlist(row)for row in lookup(tables,'rows_'+key)]
            need(got==t['rows'],'Literal table changed')
        for node in c['nodes']:
            name=node['name'];kind=node['kind']
            if kind=='base':need('R.mapIso (strongPower_one_iso G).symm'in body(src,'R_'+name),'Wrong base-node lift');continue
            kids=node['children'];key=record['tables'][kind]
            need(re.findall(r'R_([a-zA-Z0-9_]+) R',body(src,'ch_'+name).split(':=',1)[1])==kids,'Ordered children changed')
            need(ints(body(src,'e_'+name).split(':=',1)[1])==[record['node_base_exponents'][k]for k in kids],'Child dimensions changed')
            if name==c['root']:need(f'multiCodeSet e_{name} (ch_{name} R) S_{key}'in body(src,'codeBase'),'Wrong terminal')
            else:
                need(f'Realisation.multiSubst e_{name} (ch_{name} R) S_{key}'in body(src,'R_'+name),'Wrong substitution')
                need([int(x)for x in lookup(src,'w_'+name)]==record['node_weights'][name],'Typed weight literal mismatch')
        dec=p['decimal_lower_numerator'][:-15]+'.'+p['decimal_lower_numerator'][-15:]
        need(dec in src and dec in audit and p['N']in audit and p['parent_N']in audit,'Wrong headline/scope literals')
        need(re.fullmatch(r'\s*:\s*Nat\s*:=\s*'+p['parent_N']+r'\s*',body(hist,f'R5_{d}'))is not None,'Wrong matching R5 integer')
    need(b['tables']==all_tables,'Unused/inconsistent binding table')
    need(all('#print axioms '+name in audit for name in b['audited_names']),'Missing audit declaration')
    return {'status':'PASS_R6_FROZEN_SOURCE_BINDINGS','cases':3,'alphabet_size':58,'tables':len(all_tables),'node_count':sum(len(c['nodes'])for c in b['cases'].values()),'audited_names':len(b['audited_names']),'source_hashes':{str(p.relative_to(root)):hashlib.sha256(p.read_bytes()).hexdigest()for p in sorted(s.rglob('*.lean'))},'is_Lean_verification':False}
if __name__=='__main__':print(json.dumps(check(),indent=2))
