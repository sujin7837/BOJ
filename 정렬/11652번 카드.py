import sys

n = int(sys.stdin.readline())
dic = {}
for i in range(n):
    num = int(sys.stdin.readline())
    if num in dic:
        dic[num] +=1
    else:
        dic[num] = 1

mv = 0
for k, v in dic.items():
    if v > mv:
        mv = v
        mk = k
    if v == mv:
        mk = min(mk, k)
print(mk)