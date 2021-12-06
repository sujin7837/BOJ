n = int(input())

if n <= 0:
    print(0)
else:
    dp = [0] * (n+1)
    dp[2] = 3
    if n > 3:
        dp[4] += dp[2] * 3 + 2

    for i in range(6, n+1, 2):
        dp[i] = dp[i-2] * 4 - dp[i-4]

    print(dp[n])