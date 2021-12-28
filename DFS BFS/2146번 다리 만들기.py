from collections import deque
import sys

bx = [-1, 1, 0, 0]
by = [0, 0, -1, 1]

def bfs1():
    while queue:
        x, y = queue.popleft()

        for i in range(4):
            nx = x + bx[i]
            ny = y + by[i]

            if nx >= 0 and nx < n and ny >= 0 and ny < n and li[nx][ny] == 1:
                li[nx][ny] = cnt
                queue.append([nx, ny])

def bfs2(x):
    global result

    q = deque()
    d = [[-1] * n for _ in range(n)]

    for i in range(n):
        for j in range(n):
            if li[i][j] == x:
                q.append([i, j])
                d[i][j] = 0
    while q:
        a, b = q.popleft()
        for i in range(4):
            nx = a + bx[i]
            ny = b + by[i]

            if nx >= 0 and nx < n and ny >= 0 and ny < n:
                if li[nx][ny] == 0 and d[nx][ny] == -1:
                    d[nx][ny] = d[a][b] + 1
                    q.append([nx, ny])
                elif li[nx][ny] > 0 and li[nx][ny] != x:
                    result = min(result, d[a][b])
                    return


n = int(input())
li = []
queue = deque([])
cnt = 1
result = sys.maxsize

for i in range(n):
    li.append(list(map(int, input().split())))

for i in range(n):
    for j in range(n):
        if li[i][j] == 1:
            cnt += 1
            queue.append([i, j])
            li[i][j] = cnt
            bfs1()

for i in range(2,cnt):
    bfs2(i)
print(result)