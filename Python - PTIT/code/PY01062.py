import math

def is_prime(n):
    if n < 2:
        return False
    for i in range(2, math.isqrt(n) + 1):
        if n % i == 0:
            return False
    return True
for t in range(int(input())):
    s= input()
    cnt0=0
    cnt1=0
    for i in s:
        if is_prime(int(i)):
            cnt1+=1
        else: cnt0+=1

    if cnt1>cnt0:
        if is_prime(len(s)):
            print("YES")
        else: print("NO")

    else: print("NO")
