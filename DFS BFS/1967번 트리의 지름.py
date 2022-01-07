from collections import deque

def bfs(x):
    visit = [-1] * (n+1)
    queue = deque([x])
    visit[x] = 0
    max_val = [0, 0]

    while queue:
        f = queue.popleft()

        for a, b in tree[f]:
            if visit[a] == -1:
                visit[a] = visit[f] + b
                queue.append(a)

                if max_val[0] < visit[a]:
                    max_val[0] = visit[a]
                    max_val[1] = a
    return max_val

n = int(input())
tree = [[] for _ in range(n+1)]

for i in range(n-1):
    li = list(map(int, input().split()))
    tree[li[0]].append([li[1], li[2]])
    tree[li[1]].append([li[0], li[2]])

val, node = bfs(1)
val, node = bfs(node)
print(val)