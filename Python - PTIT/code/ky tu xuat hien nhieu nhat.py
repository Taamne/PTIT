
from  collections import defaultdict
for t in range(int(input())):
    cnt=defaultdict(int)
    s=input()
    lst=[str(i) for i in s]
    for i in lst:
        cnt[i]+=1
    M=max(cnt.values())
    for key, value in cnt.items():
        if(value==M):
            print(key)
            break