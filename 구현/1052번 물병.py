n, k = map(int, input().split())
result = 0

while bin(n).count('1')>k:
    cnt = 2 ** (bin(n)[::-1].index('1'))
    n+=cnt
    result+=cnt
    
print(result)