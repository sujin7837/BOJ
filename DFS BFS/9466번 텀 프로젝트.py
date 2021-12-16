def dfs(x):
    global result
    visit[x] = True
    li.append(x)

    i = graph[x]
    if not visit[i]:
        dfs(i)
    else:
        if i in li:
            result += li[li.index(i):]
        return

t = int(input())
for _ in range(t):
    n = int(input())
    graph = [0] + list(map(int, input().split()))
    visit = [False] * (n+1)
    result = []
    
    for i in range(1, n+1):
        if not visit[i]:
            li = []
            dfs(i)
    print(n - len(result))