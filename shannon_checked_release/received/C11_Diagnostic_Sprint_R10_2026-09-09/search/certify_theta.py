import json,sys,math
from pathlib import Path
from fractions import Fraction as Q
W=Path(__file__).parent; F=json.loads((W/'theta_float.json').read_text())

def ldl(A):
 n=len(A);L=[[Q(int(i==j))for j in range(n)]for i in range(n)];D=[]
 for j in range(n):
  d=A[j][j]-sum(L[j][k]**2*D[k]for k in range(j))
  if d<=0:raise ValueError(('nonpositive pivot',j,str(d)[:50]))
  D.append(d)
  for i in range(j+1,n):L[i][j]=(A[i][j]-sum(L[i][k]*L[j][k]*D[k]for k in range(j)))/d
 return D
out=[]
for f in F:
 weights=list(map(int,f['weights']));S=int(f['scale']);n=len(weights)
 for bump in [1e-8,1e-7,1e-6,1e-5]:
  t=Q(math.ceil((f['theta_t']+bump)*10**10),10**10);U=t*S
  entries=[];B=[[Q(0)for j in range(n)]for i in range(n)]
  for i,w in enumerate(weights):B[i][i]=U/w
  for (i,j),v in zip(f['theta_edges'],f['theta_y']):
   q=Q(round((v/math.sqrt((weights[i]/S)*(weights[j]/S)))*10**10),10**10)
   B[i][j]=B[j][i]=q;entries.append([min(i,j),max(i,j),str(q.numerator),str(q.denominator)])
  try:D=ldl([[x-1 for x in row]for row in B]);break
  except ValueError:continue
 else:raise ValueError('cannot certify')
 print('CERT',f['child'],'bump',bump,'min pivot',min(float(x)for x in D),flush=True)
 out.append(dict(child=f['child'],options=f['options'],weights=f['weights'],dimension=f['dimension'],upper_numerator=str(U.numerator),upper_denominator=str(U.denominator),offdiagonal=sorted(entries),positive_pivot_count=len(D)))
U=math.prod(Q(int(f['upper_numerator']),int(f['upper_denominator']))for f in out)
cert=dict(schema='C11_FIXED_TERMINAL_RATIONAL_PSD_UPPER_V1',dimension=213,factors=out,upper_numerator=str(U.numerator),upper_denominator=str(U.denominator),upper_floor=str(U.numerator//U.denominator))
(W/'fixed_terminal_upper.json').write_text(json.dumps(cert,indent=2))
print('CERTIFIED_UPPER_ROOT_APPROX',math.exp((math.log(U.numerator)-math.log(U.denominator))/213))
