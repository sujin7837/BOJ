# n, k = map(int, input().split())
# cnt = 0

# while n > 1:
#     cnt += 1
#     if n % k == 0:
#         n //= k
#     else:
#         n -= 1
# print(cnt)

n, k = map(int, input().split())
cnt = 0

while True:
    num = (n // k) * k
    cnt += (n - num)
    n = num

    if n < k:
        cnt += (n-1)
        break

    cnt += 1
    n //= k

print(cnt)

