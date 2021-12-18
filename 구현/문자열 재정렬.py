# s = list(input())
# num = 0
# s2 = []

# for x in s:
#     if x >= '0' and x <= '9':
#         num += int(x)
#     else:
#         s2.append(x)

# s2.sort()
# for x in s2:
#     print(x, end='')
# if num != 0:
#     print(num)  

s = list(input())
result = []
num = 0

for x in s:
    if x.isalpha():
        result.append(x)
    else:
        num += int(x)

result.sort()
if num != 0:
    result.append(str(num))

print(''.join(result))