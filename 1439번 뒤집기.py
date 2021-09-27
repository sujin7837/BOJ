s=input()
num=[]
start_idx=0
before=s[0]
z_cnt=0
o_cnt=0

for i in range(len(s)):
    if s[i]!=before:
        num=s[start_idx:i]
        start_idx=i
        before=s[i]
        if before=='0':
            o_cnt+=1
        else:
            z_cnt+=1

if o_cnt!=0 or z_cnt!=0:
    if s[0]=='0':
        o_cnt+=1
    else:
        z_cnt+=1

if o_cnt<z_cnt:
    print(o_cnt)
else:
    print(z_cnt)