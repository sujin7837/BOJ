s=int(input())
x=0
num=1
cnt=0

while x<=s:
    x+=num
    num+=1
    cnt+=1

print(cnt-1)