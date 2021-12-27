from collections import deque

n, m = map(int, input().split())
li = []
queue = deque([])
bx = [-1, 1, 0, 0]
by = [0, 0, -1, 1]

for i in range(n):
    li.append(list(map(int, input())))

queue.append([0, 0])

while queue:
    x, y = queue.popleft()

    for i in range(4):
        nx = x + bx[i]
        ny = y + by[i]

        if nx >= 0 and nx < n and ny >= 0 and ny < m and li[nx][ny] == 1:
            li[nx][ny] = li[x][y] + 1
            queue.append([nx, ny])
print(li[n-1][m-1])