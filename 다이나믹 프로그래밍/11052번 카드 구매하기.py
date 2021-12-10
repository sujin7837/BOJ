n = int(input())
li = list(map(int, input().split()))
v = li.copy()
dp = [0] * (n+1)
dp[1] = v[0]

for i in range(2, n+1):
    for j in range(i):
        dp[i] = max(dp[i], dp[j] + v[i-j-1])
        print(i, dp[i])

print(dp[n])