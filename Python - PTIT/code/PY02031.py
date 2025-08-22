from math import isqrt


def nt(s):
    if(s<2): return 0
    for i in range(2, isqrt(s)+1):
        if(s % i ==0):
            return 0
    return 1
n,m = input().split()
for i in range(int(n)):
    lst = [nt(int(i)) for i in input().split()]
    print(*lst)