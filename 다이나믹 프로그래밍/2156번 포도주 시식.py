n = int(input())
drink = []
for i in range(n):
    drink.append(int(input()))

dp = [0] * 10000
dp[0] = drink[0]
if n > 1:
    dp[1] = dp[0] + drink[1]
if n > 2:
    dp[2] = max(dp[1], dp[0] + drink[2], drink[1] + drink[2])

for i in range(3, n):
    dp[i] = max(dp[i-1], dp[i-2] + drink[i], dp[i-3] + drink[i-1] + drink[i])
print(dp[n-1])