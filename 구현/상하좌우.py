# n = int(input())
# plan = list(input().split(' '))

# r = 1
# c = 1
# for x in plan:
#     if x == 'L':
#         if c <= 1:
#             continue
#         else:
#             c -= 1
#     elif x == 'R':
#         if c >= n:
#             continue
#         else:
#             c += 1
#     elif x == 'U':
#         if r <= 1:
#             continue
#         else:
#             r -= 1
#     else:
#         if r >= n:
#             continue
#         else:
#             r += 1

# print(r, c)

n = int(input())
plan = input().split()
x, y = 1, 1
dx = [0, 0, -1, 1]
dy = [-1, 1, 0, 0]
p = ['L', 'R', 'U', 'D']

for i in plan:
    for j in range(4):
        if i == p[j]:
            nx = x + dx[j]
            ny = y + dy[j]
            if nx < 1 or nx > n or ny < 1 or ny > n:
                continue
            x = nx
            y = ny

print(x, y)
