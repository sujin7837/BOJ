from collections import deque

dx=[-1,1,0,0]
dy=[0,0,-1,1]
alpha={'A':0, 'B':0, 'C':0, 'E':0, 'K':0, 'L':0, 'M':0, 'Q':0, 'T':0, 'X':0, 'Y':0}

def bfs(x, y, maps, visit):
    queue=deque()
    queue.append((x,y))

    while queue:
        x,y=queue.popleft()

        for i in range(4):
            nx=x+dx[i]
            ny=y+dy[i]

            if nx<0 or ny<0 or nx>=len(maps[0]) or ny>=len(maps):
                continue
            if maps[y][x]=='.':
                continue
            if maps[y][x]==maps[ny][nx]:
                visit[ny][nx]=1
                alpha[maps[y][x]]+=1
                queue.append((nx,ny))

    return alpha
                


def solution(maps):
    answer=0
    visit=[[0]*len(maps[0]) for _ in range(len(maps))]
    
    for j in range(len(maps)):
        for i in range(len(maps[0])):
            if visit[j][i]==0:
                bfs(i, j, maps, visit)
                max(alpha.values())


    return answer