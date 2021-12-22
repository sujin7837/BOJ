while True:
    w, h = map(int, input().split())
    if w == 0 and h == 0:
        break
    else:
        li = [[] for _ in range(h)]
        for i in range(h):
            li[i] = list(map(int, input().split()))
        print(li)
        # for i in range(w):
        #     for j in range(h):
