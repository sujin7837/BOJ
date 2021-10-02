x,y=0,0
arr=[]
dot=[]
dot_x=[]
dot_y=[]
dic={1:0, 2:0, 3:0, 4:0}
k=int(input())

for i in range(6):
    arr.append(list(map(int,input().split())))
print(arr)
for dir,val in arr:
    if dir==1:
        x+=val
        dot_x.append(x)
    elif dir==2:
        x-=val
        dot_x.append(x)
    elif dir==3:
        y+=val
        dot_y.append(y)
    else:
        y-=val
        dot_y.append(y)
    dot.append([x,y])

dot_x=sorted(dot_x, key=abs)
dot_y=sorted(dot_y, key=abs)
b_square=dot_x[2]*dot_y[2]
s_square=dot_x[1]*dot_y[1]


print(dot)
print(dic)
print(b_square, s_square,  dot_x, dot_y)