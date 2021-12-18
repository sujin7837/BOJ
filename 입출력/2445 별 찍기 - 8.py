n = int(input())

for i in range(1, n+1):
    a = '*' * i
    b = ' ' * (n-i)
    print(a+b+b+a)

for i in range(n-1, 0, -1):
    a = '*' * i
    b = ' ' * (n-i)
    print(a+b+b+a)