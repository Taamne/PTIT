from math import isqrt


def nt(n):

    if(n < 2):
        return  False
    for i in range(2, isqrt(n)+1):
        if n % i ==0:
            return False
    return  True
def nd(s):
    return int(str(s)[::-1])
def cs(s):
    for i in str(s):
        if(not nt(int(i))):
            return False
    return True
for t in range(int(input())):
    n=int(input())
    if(nt(n) and nt(nd(n)) and cs(n)):
        print("Yes")
    else: print("No")
