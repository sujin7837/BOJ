n = int(input())
a = list(map(int, input().split()))
li = [a[0]]

dp = [1] * n
for i in range(1, n):
    for j in range(i):
        if a[j] < a[i]:
            dp[i] = max(dp[j] + 1, dp[i])
print(max(dp))
    