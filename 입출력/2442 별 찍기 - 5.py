n = int(input())

for i in range(0, n):
    a = ' ' * (n-i-1)
    b = '*' * (i*2 + 1)
    print(a+b)