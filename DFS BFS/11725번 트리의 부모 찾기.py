import sys
sys.setrecursionlimit(10**6)

def findParent(x):
    visit[x] = True

    for i in li[x]:
        if not visit[i]:
            parent[i] = x
            findParent(i)

n = int(sys.stdin.readline())
li = [[] for _ in range(n+1)]
visit = [False] * (n+1)

for i in range(n-1):
    x, y = map(int, sys.stdin.readline().split())
    li[x].append(y)
    li[y].append(x)

parent = [0] * (n+1)
findParent(1)

for i in range(2, n+1):
    print(parent[i])