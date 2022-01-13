n = int(input())
li = []
cnt = [0] * 3

for _ in range(n):
    li.append(list(map(int, input().split())))

def check(x, y, s):
    for i in range(x, x + s):
        for j in range(y, y + s):
            if li[x][y] != li[i][j]:
                return False
    return True

def divide(x, y, s):
    if check(x, y, s):
        cnt[li[x][y] + 1] += 1
    else:
        s //= 3
        for i in range(3):
            for j in range(3):
                divide(x + s * i, y + s * j, s)

divide(0, 0, n)
for i in range(3):
    print(cnt[i])