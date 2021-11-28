# from collections import deque

# bx = [-1, 1, 0 , 0]
# by = [0, 0, -1, 1]

# def bfs(x, y):
#     queue = deque()
#     queue.append((x, y))

#     while queue:
#         x, y = queue.popleft()

#         for i in range(4):
#             nx = x + bx[i]
#             ny = y + by[i]

#             if nx < 0 or nx >= n or ny < 0 or ny >= m:
#                 continue
#             if li[nx][ny] == 0:
#                 continue
#             if li[nx][ny] == 1:
#                 li[nx][ny] = li[x][y] + 1
#                 queue.append((nx, ny))
#     return li[n-1][m-1]

    

# n, m = map(int, input().split())
# li = []

# for i in range(n):
#     li.append(list(map(int, input())))

# print(bfs(0, 0))

from collections import deque

bx = [-1, 1, 0, 0]
by = [0, 0, -1, 1]

def bfs(x, y):
    queue = deque()
    queue.append((x, y))

    while queue:
        x, y = queue.popleft()
        for i in range(4):
            nx = x + bx[i]
            ny = y + by[i]

            if nx < 0 or nx >= n or ny < 0 or ny >= m:
                continue
            if li[nx][ny] == 0:
                continue
            if li[nx][ny] == 1:
                li[nx][ny] = li[x][y] + 1
                queue.append((nx, ny))

    return li[n-1][m-1]

n, m = map(int, input().split())
li = []

for i in range(n):
    li.append(list(map(int, input())))

print(bfs(0, 0))