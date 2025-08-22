from xmlrpc.client import MAXINT

import math
for t in range(int(input())):
    n,k= map(int,input().split())
    lst = list(map(int, input().split()))
    res=MAXINT
    for i in range(len(lst)-1):
        cnt=1
        tmp=lst[i]
        ok=True
        for j in range(i+1,len(lst)):
            if(math.gcd(tmp,lst[j]))>k:
                ok=False
                break
            elif math.gcd(tmp,lst[j]) == k:
                cnt+=1

                ok=True
                break
            else:
                tmp=math.gcd(tmp,lst[j])
                cnt+=1
        if(ok):
            if(cnt<res):
                res=cnt
    print(res if res !=0 else -1)


# 3
# 8 3
# 6 9 7 10 12 24 36 27
# 4 3
# 2 4 6 8
# 4 6
# 1 2 3 6