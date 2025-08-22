t =int(input())
import math
def cs(n):

    d = n%10
    res = d
    n//=10
    while n>0 :
        if math.fabs((n%10) -d)!=2:
            return False
        d= n%10
        res+=d
        n//=10
    if (res %10 !=0):
        return False
    return True
while t>0:
    t=t-1
    n = int(input())
    if cs(n):
        print("YES")
    else:
        print("NO")