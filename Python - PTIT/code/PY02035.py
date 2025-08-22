
s= input()
k=int(input())
seen=set()
res=[]
map_lst={}
if(len(s)%2!=0):
    for i in range(0,len(s)-1, 2):
        map_lst[int(s[i:i+2])]=map_lst.get(int(s[i:i+2]),0)+1


else:
    for i in range(0, len(s),2):
        map_lst[int(s[i:i+2])] = map_lst.get(int(s[i:i + 2]), 0) + 1
sort_map=sorted(map_lst.keys())
cnt=0
for i in sort_map:
    if(map_lst[i] >=k):
        print(i, map_lst[i])
        cnt+=1
if(cnt==0):
    print("NOT FOUND")

# 1243561411114343561491
