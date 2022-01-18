n = int(input())
li = [['*','*','*'], ['*',' ','*'], ['*','*','*']]
result = [[' '] * n for _ in range(n)]

def star(x, y, s):
    global result
    if s == 3:
        for i in range(3):
            for j in range(3):
                result[x+i][y+j]=li[i][j]
    else:
        s //= 3
        for i in range(3):
            for j in range(3):
                if i == 1 and j == 1:
                    continue
                star(x+i*s, y+j*s, s)
star(0, 0, n)


for i in range(n):
    for j in range(n):
        print(result[i][j], end='')
    print()