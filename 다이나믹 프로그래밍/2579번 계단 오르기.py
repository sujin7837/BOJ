n = int(input())
li = [0] * n
for i in range(n):
    li[i] = int(input())

dp = [0] * n
dp[0] = li[0]
if n > 1:
    dp[1] = li[0] + li[1]
if n > 2:
    dp[2] = max(li[0] + li[2], li[1] + li[2])

for i in range(3, n):
    dp[i] = max(dp[i-2] + li[i], dp[i-3] + li[i-1] + li[i])

print(dp[n-1])