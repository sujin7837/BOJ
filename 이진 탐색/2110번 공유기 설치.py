n, c = map(int, input().split())
li = []

for i in range(n):
    li.append(int(input()))
li.sort()

start, end = 1, li[-1] - li[0]
while start <= end:
    cnt = 1
    mid = (start + end) // 2
    now = li[0]
    for i in range(1, n):
        if li[i] >= mid + now:
            cnt += 1
            now = li[i]
    if cnt >= c:
        start = mid + 1
        result = mid1
    else:
        end = mid - 1

print(result)