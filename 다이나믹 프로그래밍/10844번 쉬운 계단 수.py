# n = int(input())
# dp = [[0] * 101 for _ in range(11)]

# for i in range(1, 10):
#     dp[1][i] = 1

# for i in range(2, n+1):
#     for j in range(1, 11):
#         dp[i][j] = dp[i-1][j-1] + dp[i-1][j+1]

# print(sum(dp[n]))

n = int(input())
dp = [[0] * 12 for _ in range(101)]

for i in range(2, 11):
    dp[1][i] = 1

for i in range(2, n+1):
    for j in range(1, 11):
        dp[i][j] = (dp[i-1][j-1] + dp[i-1][j+1]) % 1000000000

print(sum(dp[n]))