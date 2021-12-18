a, p = map(int, input().split())
dp = [str(a)]
idx = 0
num = 0

while True:
    for i in range(len(dp[idx])):
        num += int(dp[idx][i])**p

    if str(num) in dp:
        # print('NNNNNN')
        now = dp.index(str(num))
        break
    else:
        # print(num)
        dp.append(str(num))
        num = 0
        idx += 1

print(now)