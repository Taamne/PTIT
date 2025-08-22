from math import isqrt


def nto(n):
    if(n<2):
        return False
    for i in range(2, isqrt(n)+1):
        if n % i ==0:
            return False
    return  True
def nd(n):
    s = str(n)
    return s == s[::-1]
def ngd(n):
    s=str(n)
    return int(s[::-1])
for t in range(int(input())):
    n = int(input())
    res=[]
    if(n>10):
        for i in range(10,n):
            if ngd(i)<n:
                if(nto(i) and not nd(i) and nto(ngd(i))):
                    if i not in res:
                        res.append(i)
                    if ngd(i) not in res:
                        res.append(ngd(i))
    print()