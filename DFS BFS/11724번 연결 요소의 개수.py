from collections import deque

n, m = map(int, input().split())
graph = [[0] * (n+1) for _ in range(n+1)]
visit = [False] * (n+1)
cnt = 0

def dfs(v):
    visit[v] = True

    for j in range(1, n+1):
        if graph[v][j] == 1 and (not visit[j]):
            dfs(j)

def bfs(v):
    visit[v] = True
    queue = deque([v])
    
    while queue:
        f = queue.popleft()
        for j in range(f, n+1):
            if graph[f][j] == 1 and (not visit[j]):
                visit[j] = True

for i in range(m):
    u, v = map(int, input().split())
    graph[u][v], graph[v][u] = 1, 1

for i in range(1, n+1):
    graph[i][i] = 1
    
for i in range(1, n+1):
    for j in range(1, n+1):
        if graph[i][j] == 1 and (not visit[i]):
            cnt += 1
            dfs(i)

print(cnt)