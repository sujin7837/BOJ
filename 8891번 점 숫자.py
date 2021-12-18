def find_xy(num):
    now,now_x,now_y=1,1,1
    arr=[[0]*500 for _ in range(500)]
    while now<num:
        arr[now_x][now_y]=now
        # print(str(now_x)+' '+str(now_y))
        if now_y==1:
            now_y=now_x+1
            now_x=1
        else:
            now_y-=1
            now_x+=1
        now+=1
    print(str(now_x)+' '+str(now_y))
    return now_x,now_y
        
def find_dot(num_x,num_y):
    now,now_x,now_y=1,1,1
    arr=[[0]*500 for _ in range(500)]
    while now_x!=num_x or now_y!=num_y:
        arr[now_x][now_y]=now
        # print(str(now_x)+' '+str(now_y))
        if now_y==1:
            now_y=now_x+1
            now_x=1
        else:
            now_y-=1
            now_x+=1
        now+=1
    return now

t=int(input())

for i in range(t):
    x,y=map(int,input().split())
    dot_x,dot_y=0,0

    for j in [x,y]:
        tx,ty=find_xy(j)
        dot_x+=tx
        dot_y+=ty
    print(find_dot(dot_x,dot_y))
    