dx = [-1, 1, 0, 0]
dy = [0, 0, -1, 1]

def dfs(x, y):
    visit[x][y] = True

    for i in range(4):
        nx = x + dx[i]
        ny = y + dy[i]

        if nx >= 0 and nx < w and ny >= 0 and ny < h:
            dfs(nx, ny)



while True:
    w, h = map(int, input().split())
    if w == 0 and h == 0:
        break
    else:
        li = [[] for _ in range(h)]
        visit = [[False] * (w * h)]
        cnt = 0

        for i in range(h):
            li[i] = list(map(int, input().split()))
        for i in range(w):
            for j in range(h):
                if not visit[i][j]:
                    cnt += 1
                    dfs(i, j)
