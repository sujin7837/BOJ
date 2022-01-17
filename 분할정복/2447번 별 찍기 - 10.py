n = int(input())
li = [['***'], ['* *'], ['***']]
result = []

def star(x, y, s):
    global result
    if s == 3:
        result.append(li)
    else:
        s //= 3
        for i in range(3):
            for j in range(3):
                if i == 1 and j == 1:
                    continue
                star(x+i*s, y+j*s, s)
star(0, 0, n)
for i in range(len(result)):
    if i % 3 == 0:
        print(result[i][0][0])
        print(result[i][1][0])
        print(result[i][2][0])

for i in range(n//3):        
    print(result[i][0])

# for i in range(n):
#     for j in range(n):
#         print(result)