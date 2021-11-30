n = int(input())
a = list(map(int, input().split()))
dp = []
s = [0] * n

for i in range(n):
    dp.append(a[i])

for i in range(1, n):
    for j in range(i):
        if a[j] < a[i]:
            dp[i] = max(dp[i], dp[j] + a[i])

print(max(dp))