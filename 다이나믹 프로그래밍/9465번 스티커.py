t = int(input())

for test in range(t):
    n = int(input())
    li1 = list(map(int, input().split()))
    li2 = list(map(int, input().split()))

    dp = [[0] * n for _ in range(2)]
    dp[0][0] = li1[0]
    dp[1][0] = li2[0]
    for i in range(1, n):
        dp[0][i] = max(dp[0][i-1], dp[1][i-1] + li1[i])
        dp[1][i] = max(dp[1][i-1], dp[0][i-1] + li2[i])

    print(max(dp[0][n-1], dp[1][n-1]))
    