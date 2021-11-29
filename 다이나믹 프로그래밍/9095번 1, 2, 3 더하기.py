t = int(input())

for test in range(t):
    n = int(input())
    dp = [1, 1, 2]
    if n < 3:
        print(dp[n])
    else:
        for i in range(3, n+1):
            dp.append(dp[i-1] + dp[i-2] + dp[i-3])
        print(dp[n])