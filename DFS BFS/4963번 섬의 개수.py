import sys
sys.setrecursionlimit(10 ** 6)

dx = [-1, -1, -1, 1, 1, 1, 0, 0]
dy = [-1, 0, 1, -1, 0, 1, -1, 1]

def dfs(x, y):
    visit[x][y] = True

    for i in range(7):
        nx = x + dx[i]
        ny = y + dy[i]

        if nx >= 0 and nx < h and ny >= 0 and ny < w:
            if not visit[nx][ny] and li[nx][ny] == 1:
                dfs(nx, ny)



while True:
    w, h = map(int, input().split())
    if w == 0 and h == 0:
        break
    else:
        li = [[] for _ in range(h)]
        visit = [[False] * w for _ in range(h)] 
        cnt = 0

        for i in range(h):
            li[i] = list(map(int, input().split()))
        for i in range(h):
            for j in range(w):
                if not visit[i][j] and li[i][j] == 1:
                    cnt += 1
                    dfs(i, j)
        print(cnt)
