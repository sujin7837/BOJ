n = int(input())
li = []
for i in range(n):
    w, x, y, z = input().split()
    x, y, z = int(x), int(y), int(z)
    li.append((w, x, y, z))

li.sort(key = lambda x : (-x[1], x[2], -x[3], x[0]))
for w, x, y, z in li:
    print(w)