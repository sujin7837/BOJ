from collections import deque
import sys

read = sys.stdin.readline
v = int(read())
graph = [[] for _ in range(v+1)]


for i in range(v):
    li = list(map(int, read().split()))
    for j in range(1, len(li)-2, 2):
        graph[li[0]].append((li[j], li[j+1]))

def bfs(x):
    visit = [-1] * (v+1)
    max_val = [0, 0]
    visit[x] = 0
    queue = deque([x])

    while queue:
        f = queue.popleft()
        for a, b in graph[f]:
            if visit[a] == -1:
                visit[a] = visit[f] + b
                queue.append(a)
                if max_val[0] < visit[a]:
                    max_val = visit[a], a

    return max_val

val, node = bfs(1)

val, node = bfs(node)
print(val)