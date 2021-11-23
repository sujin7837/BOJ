n = int(input())
for i in range(n, 0, -1):
    a = '*' * i
    b = ' ' * (n-i)
    print(a+b)