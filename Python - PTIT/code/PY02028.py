from math import isqrt


def checknt(n):
    if(n<2):
        return False
    for i in range(2, isqrt(n)+1):
        if(n%i ==0):
            return False
    return True
n=int(input())
lst=list(map(int, input().split()))
lstnt=[]
for  i in lst:
    if(checknt(i)):
        lstnt.append(i)
lstnt=sorted(lstnt)
j=0
for i in lst:
    if(checknt(i)):
        print(lstnt[j],end=" ")
        j+=1
    else:
        print(i, end=" ")
# 8
# 4 6 3 8 7 2 5 9

