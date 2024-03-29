INF = 1e9

n, k = map(int, input().split())
dp = [[1] * (n+1) for _ in range(k+1)]

if k > 1:
    for i in range(1, n+1):
        dp[2][i] = i+1

for i in range(2, k+1):
    dp[i][1] = i
for i in range(3, k+1):
    for j in range(2, n+1):
        dp[i][j] = (dp[i-1][j] + dp[i][j-1]) % INF

print(int(dp[k][n]))