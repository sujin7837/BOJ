k, n = map(int, input().split())
li = []

for i in range(k):
    li.append(int(input()))

start, end = 1, max(li)
while start <= end:
    cnt = 0
    mid = (start + end) // 2
    for i in range(k):
        cnt += li[i] // mid
    if cnt >= n:
        start = mid + 1
    else:
        end = mid - 1

print(end)