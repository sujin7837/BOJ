n, m = map(int, input().split())
li = list(map(int, input().split()))
result = max(li)

start, end = 0, max(li)
while start <= end:
    sum = 0
    mid = (start + end) // 2
    for x in li:
        if x > mid:
            sum += (x - mid)
    if sum >= m:
        start = mid + 1
    elif sum < m:
        end = mid - 1

print(end)