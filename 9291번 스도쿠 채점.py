def check(sudocu):
    s="CORRECT"
    for i in range(9):
        ch1=[0]*10
        ch2=[0]*10

        for j in range(9):
            ch1[sudocu[i][j]]=1
            ch2[sudocu[j][i]]=1
        if sum(ch1)!=9 or sum(ch2)!=0:
            s="INCORRECT"
            



t=int(input())

for k in range(t):
    sudocu=[list(map(int,input().split())) for _ in range(9)]
    print(sudocu.rstrip())
