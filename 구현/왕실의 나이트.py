l_x = [-1, -2, -2, -1, 1, 2, 2, 1]
l_y = [-2, -1, 1, 2, 2, 1, -1, -2]

now = input()
x = int(ord(now[0])) - int(ord('a'))
y = int(now[1])
cnt = 0
    
for i in range(8):
    nx = x + l_x[i]
    ny = y + l_y[i]
    if nx < 0 or nx >= 8 or ny < 1 or ny > 8:
        continue
    cnt += 1

print(cnt)