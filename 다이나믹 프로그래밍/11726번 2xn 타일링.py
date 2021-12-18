n = int(input())
dp = [0, 1, 2]

if n < 3:
    result = dp[n] % 10007

else:
    for i in range(3, n+1):
        dp.append(dp[i-1] + dp[i-2])
    result = dp[n] % 10007
    
print(result)