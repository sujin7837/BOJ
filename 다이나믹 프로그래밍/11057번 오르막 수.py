n = int(input())
dp = [[0] * 12 for _ in range(1001)]

for i in range(1, 11):
    dp[1][i] = 1

for i in range(2, n+1):
    for j in range(1, 11):

        dp[i][j] = sum(dp[i-1][1:j+1])
        print(dp[i][j], j)

print(sum(dp[n]) % 10007)