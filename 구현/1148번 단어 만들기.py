origin_word = []
origin_puzz = []
dict_puzz = {}
puzz = []

s = input()
while s!='-':
    origin_word.append(s)
    s = input()

s = input()
while s!='#':
    origin_puzz.append(s)
    s = input()

for x in origin_puzz:
    for y in x:
        dict_puzz[y]=x.count(y)
    for y in origin_word:
        y=''.join(sorted(y))
        print(y[::-1][0])
        for z in y:
            if (z not in dict_puzz) or (y.count(z)>dict_puzz[z]):
                break
            if z==y[::-1][0]:
                puzz.append(y)
                break
    # print(puzz)
    cnt_puzz = dict_puzz.copy()
    for k,v in cnt_puzz.items():
        cnt_puzz[k]=0
    for y in dict_puzz.keys():
        for z in puzz:
            if y in z:
                cnt_puzz[y]=1
