from collections import deque

def dfs(v):
    visit[v] = True
    print(v, end=' ')

    for i in range(1, n+1):
        if graph[v][i] == 1 and (not visit[i]):
            dfs(i)

def bfs(v):
    queue = deque([v])
    visit[v] = True

    while queue:
        f = queue.popleft()
        print(f, end=' ')
        for i in range(1, n+1):
            if graph[f][i] == 1 and (not visit[i]):
                visit[i] = True
                queue.append(i)

n, m, v = map(int, input().split())
graph = [[0] * (n+1) for i in range(n+1)]
visit = [False] * (n+1)

for i in range(m):
    x, y = map(int, input().split())
    graph[x][y], graph[y][x] = 1, 1

dfs(v)
visit = [False] * (n+1)
print()
bfs(v)