n = int(input())
li = []
for i in range(n):
    x, y = input().split()
    x = int(x)
    li.append((x, y))

li.sort(key = lambda x : x[0])
for x, y in li:
    print(x, y)