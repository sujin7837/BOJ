# n, k = map(int, input().split())
# a = list(map(int, input().split()))
# b = list(map(int, input().split()))

# a.sort()
# b.sort()
# b.reverse()

# a_idx = 0
# b_idx = 0
# for i in range(k):
#     if a[a_idx] < b[b_idx]:
#         a[a_idx], b[b_idx] = b[b_idx], a[a_idx]
#         a_idx += 1
#         b_idx += 1
#     else:
#         a_idx += 1

# result = sum(a)
# print(result)

n, k = map(int, input().split())
a = list(map(int, input().split()))
b = list(map(int, input().split()))

a.sort()
b.sort(reverse=True)

for i in range(k):
    if a[i] < b[i]:
        a[i], b[i] = b[i], a[i]
    else:
        break

print(sum(a))