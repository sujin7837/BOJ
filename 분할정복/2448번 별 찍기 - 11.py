n = int(input())
li = ['  *  ', ' * * ', '*****']
result = [[' '] for _ in range(n)]

def star(x, y, n):
    if n == 3:
        for i in range(3):
            for j in range(5):
                result[x+i*n][y+j*n] = li[i][j]
            
    else:
        n //= 3
        for i in range(3):
            for j in range(3):
                star(x+i*n, y+j*n, n)

star(0, 0, n)