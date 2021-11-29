n = int(input())
dp = [0, 0, 1, 1]

if n <= 3:
    print(dp[n])
else:
    for i in range(4, n+1):
        dp.append(dp[i-1])
        if i % 3 == 0:
            dp[i] = min(dp[i//3], dp[i])
        if i % 2 == 0:
            dp[i] = min(dp[i//2], dp[i])
        dp[i] += 1

    print(dp[n])