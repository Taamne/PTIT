from math import isqrt


def checknt(n):
    if(n < 2):
        return False
    for i in range(2, isqrt(n)+1):
        if(n%i==0):
            return False
    return True
n = int(input())
lst= list(map(int, input().split()))
seen= set()
B=[]
for i in lst:
    if(i not in seen):
        B.append(i)
        seen.add(i)
sum_lst=sum(B)
suml=0
check=False
res=0
for i in range(0,len(B)):
    suml+=B[i]
    if(checknt(suml) and checknt(sum_lst-suml)):
        check=True
        res=i
        break
if(check):
    print(res)
else: print("NOT FOUND")
# 10
# 3 6 7 3 4 7 3 6 4 4
# 10
# 3 6 7 3 5 7 3 6 6 7

