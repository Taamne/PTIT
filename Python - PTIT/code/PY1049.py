def checknt(n):
    if n < 2:
        return False
    for i in range(2, math.isqrt(n) + 1):
        if n % i == 0:
            return False
    return True
t = int(input())

import math

while t>0:
    t-=1
    s = input()
    cnt1=0
    cnt0=0
    if checknt(len(s)) :
        for i in s:
            if(checknt(int(i))):
                cnt1+=1
            else: cnt0 +=1
        if cnt1 > cnt0:
            print("YES")
        else:
            print("NO")
    else: print("NO")