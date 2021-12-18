n,m=map(int,input().split())
p=[]
profit=[]

for i in range(m):
    p.append(int(input()))

p.sort()
for i in range(len(p)):
    if (m-i)<n:
        profit.append(p[i]*(m-i))
    else:
        profit.append(p[i]*n)

idx=p[profit.index(max(profit))]
val=max(profit)
print(str(idx)+' '+str(val))