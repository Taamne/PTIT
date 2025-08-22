
s= input()
seen=set()
res=[]
map_lst={}
if(len(s)%2!=0):
    for i in range(0,len(s)-1, 2):
        map_lst[int(s[i:i+2])]=map_lst.get(int(s[i:i+2]),0)+1


else:
    for i in range(0, len(s),2):
        map_lst[int(s[i:i+2])] = map_lst.get(int(s[i:i + 2]), 0) + 1

for i in map_lst:
    print(i, map_lst[i])

# 1243561411114343561491
