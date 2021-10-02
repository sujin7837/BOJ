import sys

n=int(sys.stdin.readline())
m=int(sys.stdin.readline())

now,x,y=1,n//2,n//2
inc=1
pm=-1

arr=[[0]*n for _ in range(n)]
arr[x][y]=now
now+=1
while now<n**2:
    if x<0 or y<0 or x>=n or y>=n: break
    for i in range(inc):
        # y 증감
        y+=pm
        if y<0 or y>=n: break
        else:   
            if now>n**2: break
            arr[x][y]=now
            now+=1
            
    pm*=-1

    for i in range(inc):
        # x 증감
        x+=pm
        if x<0 or x>=n: break
        else:
            if now>=n**2: break
            arr[x][y]=now
            now+=1
            
    inc+=1

for i in range(n):
    for j in range(n):
        print(str(arr[j][i]),end=' ')
        if arr[j][i]==m:
            mx=i+1
            my=j+1
    print()
print(str(mx)+' '+str(my))