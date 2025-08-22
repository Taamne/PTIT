from PY02017 import map_lst

s= input()
seen=set()
res=[]
map_lst={}
if(len(s)%2!=0):
    for i in range(0,len(s)-1, 2):
        if(int(s[i:i+2]) not in seen):
            seen.add(int(s[i:i+2]))
            res.append(int(s[i:i+2]))


else:
    for i in range(0, len(s),2):
        if (int(s[i:i + 2]) not in seen):
            seen.add(int(s[i:i + 2]))
            res.append(int(s[i:i + 2]))
for i in res:
    print(i, end=" ")

# 1243561411114343561491
