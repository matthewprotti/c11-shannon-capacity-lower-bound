"""Derive universal-rule test fixtures from the frozen R6 ancestor, without modifying it."""
from pathlib import Path
import hashlib, json, zipfile
ROOT=Path(__file__).resolve().parent
ARCHIVE=ROOT/'inputs/R6_FROZEN.zip'
EXPECTED='24b64ccbd1f38cd1ad7921993575d6ebff0638c5d3c694f8e78c8fca3b2be045'
def main():
    digest=hashlib.sha256(ARCHIVE.read_bytes()).hexdigest()
    if digest!=EXPECTED:
        raise ValueError('R6 ancestor digest mismatch')
    prefix='C11_Avoidance_Profile_R6_2026-09-08/'
    letters='BNADOHV'; index={c:i for i,c in enumerate(letters)}
    edges=['BO','BH','BV','NA','ND','NO','NH','NV','AD','AH','DV']
    s=[[False]*7 for _ in range(7)]
    for a,b in edges:s[index[a]][index[b]]=s[index[b]][index[a]]=True
    rules={}; bindings={}
    with zipfile.ZipFile(ARCHIVE) as z:
        for dim in [186,198,213]:
            parents=json.loads(z.read(prefix+f'parent/C11_d{dim}.json'))
            augments=json.loads(z.read(prefix+f'certificates/C11_AP_d{dim}.json'))
            nodes={n['name']:n for n in parents['nodes']}
            for a in augments['augmentations']:
                node=nodes[a['node']];table=parents['tables'][node['kind']]
                row={
                  'arity':len(node['children']),
                  'table':[[[index[c] for c in w] for w in table[label]] for label in letters],
                  'target':index[a['target_family']],
                  'extension':[[index[c] for c in w] for w in a['extension_words']]}
                key=hashlib.sha256(json.dumps(row,sort_keys=True,separators=(',',':')).encode()).hexdigest()
                rules[key]=row;bindings.setdefault(key,[]).append(f'd{dim}/{a["node"]}')
    output={'schema':'C11_R7_R6_RULE_FIXTURES_V1','source_archive_sha256':digest,'alphabet':letters,
      'separation':s,'rules':[dict(label=', '.join(bindings[k]),rule_identity=k,**v) for k,v in sorted(rules.items())]}
    (ROOT/'R6_RULE_FIXTURES.json').write_text(json.dumps(output,indent=2)+'\n')
    print(len(rules),'distinct augmentation recipes from',sum(map(len,bindings.values())),'nodes')
if __name__=='__main__':main()
