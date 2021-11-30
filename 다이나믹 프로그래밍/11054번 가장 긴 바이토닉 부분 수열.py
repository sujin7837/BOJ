n = int(input())
a = list(map(int, input().split()))
dp = [1] * n
dp2 = [0] * n
result = [0] * n

for i in range(1, n):
    for j in range(i):
        if a[j] < a[i]:
            dp[i] = max(dp[i], dp[j] + 1)

for i in range(n-1, -1, -1):
    for j in range(n-1, i, -1):
        if a[j] < a[i]:
            dp2[i] = max(dp2[i], dp2[j] + 1)

for i in range(n):
    result[i] = dp[i] + dp2[i]
    print(dp[i], dp2[i])

print(max(result))