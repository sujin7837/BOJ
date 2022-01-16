n = int(input())
li = []
result = ''

for _ in range(n):
    li.append(list(map(int, input())))


def check(x, y, s):
    global result
    for i in range(x, x+s):
        for j in range(y, y+s):
            if li[i][j] != li[x][y]:
                return False
    return True
                

def divide(x, y, s):
    global result
    if check(x, y, s):
        result += str(li[x][y])

    else:
        s //= 2
        for i in range(2):
            for j in range(2):
                if i == 0 and j == 0:
                    result += '('
                divide(x+i*s, y+j*s, s)
                if i == 1 and j == 1:
                    result += ')'

divide(0, 0, n)
print(result)

                