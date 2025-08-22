n,m=map(int, input().split())
lst=list(map(int, input().split()))
map_lst={}
for i in lst:
    map_lst[i]  = map_lst.get(i,0)+1
sort_map=sorted(set(map_lst.values()),reverse=True)
if(len(sort_map)<2):
    print("NONE")
else:
    se= sort_map[1]
    for u,v in map_lst.items():
        if(v==se):
            print(u)
            break

# 10 4
# 2 3 1 2 3 4 1 2 3 2
# 8 4
# 1 2 3 4 4 3 2 1