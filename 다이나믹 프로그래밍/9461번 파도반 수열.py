t = int(input())
for test in range(t):
    n = int(input())
    dp = [0] * (n+1)

    dp[1] = 1
    if n > 1:
        dp[2] = dp[1]
    if n > 2:
        dp[3] = dp[2]
    if n > 3:
        dp[4] = dp[1] + dp[3]
    if n > 4:
        dp[5] = dp[4]

    for i in range(6, n+1):
        dp[i] = dp[i-1] + dp[i-5]

    print(dp[n])