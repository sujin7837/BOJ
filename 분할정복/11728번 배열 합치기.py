n, m = map(int, input().split())

a = list(map(int, input().split()))
b = list(map(int, input().split()))
li = a + b
li.sort()

for x in li:
    print(x, end = ' ')