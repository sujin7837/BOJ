n = int(input())
num = int(n ** (1/2))
cnt = 0

while n > 0 and num > 0:
    if n >= (num ** 2):
        n -= (num ** 2)
        cnt += 1
    else:
        num -= 1

print(cnt)