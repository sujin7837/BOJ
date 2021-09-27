n=int(input())
nom=[]
cnt=0
for i in range(n):
    nom.append(int(input()))

dasom=nom[0]
more=nom[1:]
if n==1:
    cnt=0
else:
    more.sort(reverse=True)
    while dasom<=more[0]:
        dasom+=1
        more[0]-=1
        cnt+=1
        more.sort(reverse=True)

print(cnt)