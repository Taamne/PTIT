from xmlrpc.client import MAXINT

n=int(input())
lst= list(map(int, input().split()))
sumlst=0
minn=MAXINT
check=0
for i in range(0,len(lst)):
    sumlst=0
    for j in range(0, len((lst))):
        sumlst+=abs(lst[i]-lst[j])
    if sumlst<minn:
        minn=sumlst
        check=lst[i]
print(f"{minn} {check}")
# 8
# 13 5 8 7 9 15 26 34
