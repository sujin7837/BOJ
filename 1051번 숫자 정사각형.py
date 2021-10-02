n,m=map(int,input().split())
start=min(n,m)
arr=[]
isFind=False

for i in range(n):
    arr.append(list(input()))
while start>0 and isFind==False:
    for i in range(n):
        if i+start-1>=n: break
        for j in range(m):
            if j+start-1>=m: break
            one=arr[i][j]
            two=arr[i][j+start-1]
            three=arr[i+start-1][j]
            four=arr[i+start-1][j+start-1]
            if one==two==three==four:
                print(start**2)
                isFind=True
                break
        if one==two==three==four:
            break
    start-=1

    