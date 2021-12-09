num = input()
val = True
if not str.isdigit(num) or num[0]=='0':
    print(0)
else:
    n = list(map(int, num))
    while 0 in n:
        idx = n.index(0)
        n[idx-1] = int(str(n[idx-1]) + str('0'))
        del n[idx]

    for i in range(len(n)):
        if n[i] <= 0 or n[i] > 26:
            print(0)
            val = False
            break
    
    if val:
        m = len(n)
        dp = [[0] * 2 for _ in range(m+1)]
        result = [0] * (m+1)
        s = []
        val = False

        for i in range(m):
            s.append(str(n[i]))

        dp[1][0], dp[1][1] = 1, 0
        result[1] = (dp[1][0] + dp[1][1]) % 1000000
        for i in range(2, m+1):
            tmp = int(s[i-2] + s[i-1])
            if tmp <= 26:
                dp[i][1] = dp[i-1][0]
            
            dp[i][0] = dp[i-1][0] + dp[i-1][1]
            result[i] = (dp[i][0] + dp[i][1]) % 1000000

        print(int(result[m]))