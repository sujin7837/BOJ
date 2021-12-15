from collections import deque

def bfs(x):
    visit[x] = True
    queue = deque([x])
    
    while queue:
        f = queue.popleft()
        for k in graph[f]:
            if not visit[k]:
                visit[k] = True
                queue.append(k)

t = int(input())
for test in range(t):
    n = int(input())
    li = list(map(int, input().split()))
    graph = [[] for _ in range(n+1)]
    visit = [False] * (n+1)
    cnt = 0

    for i in range(len(li)):
        graph[i+1].append(li[i])

    for i in range(1, n+1):
        if not visit[i]:
            cnt += 1
            bfs(i)

    print(cnt)