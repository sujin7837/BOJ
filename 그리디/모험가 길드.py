# n = int(input())
# gongpo = list(map(int, input().split(' ')))

# gongpo.sort()
# count = 0
# result = 0
# for x in gongpo:
#     count += 1
#     if x <= count:
#         result += 1
#         count = 0
# print(result)

n = int(input())
gongpo = list(map(int, input().split(' ')))
gongpo.sort()

count = 0
group = 0
for x in gongpo:
    count += 1
    if x <= count:
        group += 1
        count = 0

print(group)