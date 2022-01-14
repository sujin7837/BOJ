n = int(input())
cnt = [0] * (n+1)
cnt[1] = 1

for i in range(2, n+1):
    cnt[i] = cnt[i-1] * 2 + 1

def hanoi(x, start, end):
    global cnt
    if x == 1:
        print(start, end)
        return
    else:
        hanoi(x-1, start, 6-start-end)
        print(start, end)
        hanoi(x-1, 6-start-end, end)

print(cnt[n])    
hanoi(n, 1, 3)