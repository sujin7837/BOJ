c,r=map(int,input().split())
k=int(input())
dx=[1,0,-1,0]
dy=[0,1,0,-1]

x,y,dir=-1,0,0
cnt=0
sudocu=[[0]*c for _ in range(r)]

if c*r<k:
    print(0)
else:
    while cnt!=k:
        sudocu[x][y]=cnt
        nx=x+dx[dir]
        ny=y+dy[dir]

        if nx<0 or ny<0 or nx>=r or ny>=c or sudocu[nx][ny]!=0:
            dir+=1
            if dir==4:
                dir=0
            nx=x+dx[dir]
            ny=y+dy[dir]
        x,y,cnt=nx,ny,cnt+1
    print(str(y+1)+' '+str(x+1))
