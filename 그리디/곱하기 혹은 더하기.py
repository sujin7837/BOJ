s = input()

now = s[0]
num = int(now)
for i in range(1, len(s)):
    if (now == '0' and i == 1) or s[i] == '0':
        num += int(s[i])
    else:
        num *= int(s[i])

print(num)