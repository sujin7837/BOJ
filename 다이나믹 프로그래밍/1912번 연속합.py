n = int(input())
li = list(map(int, input().split()))
dp = [0] * n
sum = 0

for i in range(n):
    if li[i] < 0 and abs(li[i]) > sum:
        sum = 0
        dp[i] = li[i]
        continue

    sum += li[i]
    dp[i] = sum
print(max(dp))
