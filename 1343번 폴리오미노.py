board=input().split('.')
board2=board
poly='AAAA'
poly2='BB'
result=''
for i in board:
    if len(i)%2!=0:
        result=str(-1)+'.'
        break
    else:
        for j in range(len(i)//4):
                result+=poly
        if len(i)%4!=0:
            result+=poly2
        result+='.'
print(result[0:-1])