def dfs(x, y):
    if x < 0 or x >= n or y < 0 or y >= m:
        return False
    if li[x][y] == 0:
        li[x][y] = 1
        dfs(x-1, y)
        dfs(x+1, y)
        dfs(x, y-1)
        dfs(x, y+1)
        return True
    return False

n, m = map(int, input().split())
li = []
cnt = 0

for i in range(n):
    li.append(list(map(int, input())))

for i in range(n):
    for j in range(m):
        if dfs(i, j) == True:
            cnt += 1
print(cnt)