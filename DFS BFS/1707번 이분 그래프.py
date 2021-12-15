from collections import deque

def bfs(x):
    visit[x] = 1
    queue = deque([x])

    while queue:
        f = queue.popleft()
        for i in graph[f]:
            if not visit[i]:
                visit[i] = -visit[f]
                queue.append(i)
            elif visit[i] == visit[f]:
                return False
    return True


k = int(input())
for test in range(k):
    v, e = map(int, input().split())
    graph = [[] for _ in range(v+1)]
    visit = [0] * (v+1)
    cnt = 1

    for i in range(e):
        u, v = map(int, input().split())
        graph[u].append(v)
        graph[v].append(u)

    result = "YES"
    for i in range(1, v+1):
        if not visit[i]:
            if not bfs(i):
                result = "NO"
                break
    print(result)
            