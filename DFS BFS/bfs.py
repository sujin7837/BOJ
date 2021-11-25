from collections import deque

graph = [
    [],
    [2, 3, 8],
    [1, 7],
    [1, 4, 5],
    [3, 5],
    [3, 4],
    [7],
    [2, 6, 8],
    [1, 7]
]

visited = [False] * 9

def bfs(graph, start, visited):
    visited[start] = True
    queue = deque([start])
    
    while queue:
        v = queue.popleft()
        print(v, end=' ')

        for x in graph[v]:
            if not visited[x]:
                visited[x] = True
                queue.append(x)

bfs(graph, 1, visited)
    