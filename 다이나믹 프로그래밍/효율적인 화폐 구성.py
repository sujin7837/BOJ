INF = int(1e9)

n, m = map(int, input().split())
money =[]
dp = [INF] * (m+1)

for i in range(n):
    money.append(int(input()))

dp[0] = 0
for i in money:
    for j in range(i, m+1):
        if dp[j-i] != INF:
            dp[j] = min(dp[j], dp[j-i] + 1)

if dp[m] >= INF:
    print(-1)
else:
    print(dp[m])
