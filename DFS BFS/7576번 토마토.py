from collections import deque

bx = [-1, 1, 0, 0]
by = [0, 0, -1, 1]

def bfs():
    while queue:
        a, b = queue.popleft()
        for i in range(4):
            nx = a + bx[i]
            ny = b + by[i]
        
            if nx >= 0 and nx < n and ny >= 0 and ny < m:
                if li[nx][ny] == 0:
                    li[nx][ny] = li[a][b] + 1
                    queue.append([nx, ny])

m, n = map(int, input().split())
li = [[] for _ in range(n)]
cnt = 0
queue = deque([])
result = 0

for i in range(n):
    li[i] = list(map(int, input().split()))

for i in range(n):
    for j in range(m):
        if li[i][j] == 1:
            queue.append([i, j])

bfs()
for i in li:
    for j in i:
        if j == 0:
            print(-1)
            exit(0)
    result = max(result, max(i))
print(result - 1)