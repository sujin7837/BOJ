n = int(input())

for i in range(1, n+1):
    if i == n:
        s = '*' * (2*i-1)
    elif i == 1:
        a = ' ' * (n-i)
        s = a+'*'+a
    else:
        a = ' ' * (n-i)
        b = ' ' * ((i-1)*2-1)
        s = a+'*'+b+'*'+a
    print(s)