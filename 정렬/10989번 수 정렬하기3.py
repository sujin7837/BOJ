import sys

n = int(sys.stdin.readline())
li = [0] * (n+1)

for i in range(n):
    num = int(sys.stdin.readline())
    li[num] += 1

for i in range(1, len(li)):
    if li[i] != 0:
        for j in range(li[i]):
            print(i)