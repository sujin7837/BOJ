dx = [0, 0, -1, 1]
dy = [-1, 1, 0, 0]

def dfs(x, y):
    visit[x][y] = True
    cnt.append((x, y))

    for i in range(4):
        nx = x + dx[i]
        ny = y + dy[i]

        if nx < 0 or ny < 0 or nx >= n or ny >= n:
            continue
        if graph[nx][ny] == '1' and (not visit[nx][ny]):
            dfs(nx, ny)
    return

n = int(input())
graph = [[] for _ in range(n)]
visit = [[False] * (n+1) for _ in range(n+1)]
result = 0
result_cnt = []

for i in range(n):
    s = input()
    for x in s:
        graph[i].append(x)

for i in range(n):
    for j in range(n):
        if graph[i][j] == '1' and (not visit[i][j]):
            cnt = []
            result += 1
            dfs(i, j)
            result_cnt.append(len(cnt))

print(result)
if len(result_cnt) == 0:
    print(0)
else:
    result_cnt.sort()
    for x in result_cnt:
        print(x)