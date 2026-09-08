#!/usr/bin/env python3
"""Supplementary frozen-data/source binding. Lean acceptance is separate."""
from pathlib import Path
import hashlib, json, re, sys

WORK = Path(__file__).resolve().parents[1]
ABC = 'BNADOHV'


def need(condition, message):
    if not condition:raise ValueError(message)


def strip_comments(text):
    out=[];i=0;depth=0
    while i<len(text):
        if text.startswith('/-',i):depth+=1;i+=2
        elif depth and text.startswith('-/',i):depth-=1;i+=2
        elif depth:
            out.append('\n' if text[i]=='\n' else ' ');i+=1
        elif text.startswith('--',i):
            stop=text.find('\n',i)
            if stop<0:break
            out.append('\n');i=stop+1
        else:out.append(text[i]);i+=1
    need(depth==0,'unterminated comment')
    return ''.join(out)


def body(source,name):
    found=re.search(r'(?m)^def\s+'+re.escape(name)+r'\b',source)
    need(found is not None,'missing '+name)
    text=source[found.end():]
    end=re.search(r'(?m)^(?:def|theorem|lemma|section|end|namespace|variable)\b',text)
    return text[:end.start()] if end else text


def words(text):
    return [''.join(re.findall(r'Letter\.([BNADOHV])',word)) for word in re.findall(r'!\[([^\]]*)\]',text)]


def check(root=WORK):
    frozen=root/'frozen';bindings=json.loads((root/'SOURCE_BINDINGS.json').read_text())
    source=root/'source'
    table_source=strip_comments((source/'ShannonBounds/C11R5Tables.lean').read_text())
    for path in source.rglob('*.lean'):
        code=strip_comments(path.read_text())
        need(not re.search(r'\b(?:sorry|admit|axiom|unsafe|run_elab|run_tac)\b|implemented_by|skipKernelTC|\[extern',code),'proof bypass in '+str(path))
    for key,table in bindings['tables'].items():
        actual=body(table_source,'T_'+key)
        if type(table)is list:need(words(actual)==table,'terminal mismatch '+key)
        else:
            rows=re.findall(r'\|\s*\.([BNADOHV])\s*=>\s*([\s\S]*?)(?=\n\s*\||\Z)',actual)
            need(len(rows)==7 and {a:words(value)for a,value in rows}==table,'substitution mismatch '+key)
    history=strip_comments((source/'ShannonBounds/C11R5History.lean').read_text())
    audit=(source/'C11R5_AxiomAudit.lean').read_text()
    for d,record in bindings['cases'].items():
        raw=(frozen/f'certificates/C11_d{d}.json').read_bytes()
        need(hashlib.sha256(raw).hexdigest()==bindings['certificate_hashes'][d],'frozen certificate changed')
        c=json.loads(raw)
        need(record['nodes']==c['nodes'] and record['N']==c['N'] and record['dimension']==c['dimension'],'binding record mismatch')
        text=strip_comments((source/f'ShannonBounds/C11R5D{d}.lean').read_text())
        need(re.fullmatch(r'\s*:\s*Nat\s*:=\s*'+c['N']+r'\s*',body(text,'N'))is not None,'wrong N')
        for node in c['nodes']:
            name=node['name'];kind=node['kind']
            if kind=='base':
                need('CertC11.R1 R'in body(text,'R_'+name),'base realization changed')
                continue
            children=node['children']
            child_body=body(text,'ch_'+name).split(':=',1)[1]
            need(re.findall(r'R_([a-zA-Z0-9_]+) R',child_body)==children,'child order mismatch')
            exponent_body=body(text,'e_'+name).split(':=',1)[1]
            need([int(n)for n in re.findall(r'\b[0-9]+\b',exponent_body)]==[record['node_base_exponents'][k]for k in children],'child exponents mismatch')
            if name==c['root']:
                need(f'multiCodeSet e_{name} (ch_{name} R) S_{kind}'in body(text,'codeBase'),'wrong terminal connection')
            else:
                need(f'Realisation.multiSubst e_{name} (ch_{name} R) S_{kind}'in body(text,'R_'+name),'wrong substitution connection')
                ws={a:int(value)for a,value in re.findall(r'\|\s*\.([BNADOHV])\s*=>\s*(\d+)',body(text,'w_'+name))}
                need(ws==record['node_weights'][name],'node weights mismatch')
        for key,target in c['targets'].items():
            need(re.fullmatch(r'\s*:\s*Nat\s*:=\s*'+target['N']+r'\s*',body(history,key))is not None,'history literal mismatch')
            need(target['N']in audit,'missing scope comparison literal')
        need(c['N']in audit,'missing scope cardinality literal')
        decimal=c['decimal_lower_numerator'][:-15]+'.'+c['decimal_lower_numerator'][-15:]
        need(decimal in text and decimal in audit,'decimal literal mismatch')
    need(all('#print axioms '+name in audit for name in bindings['audited_names']),'missing requested axiom report')
    hashes={str(p.relative_to(root)):hashlib.sha256(p.read_bytes()).hexdigest()for p in sorted(source.rglob('*.lean'))}
    return {'status':'PASS_R5_FROZEN_SOURCE_BINDINGS','cases':3,'tables':len(bindings['tables']),'node_count':sum(len(c['nodes'])for c in bindings['cases'].values()),'audited_names':len(bindings['audited_names']),'source_hashes':hashes,'is_Lean_verification':False}


if __name__=='__main__':print(json.dumps(check(),indent=2))
