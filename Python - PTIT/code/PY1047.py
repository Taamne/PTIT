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
    res = int(s[len(s)-4:])
    # print(res)
    if checknt(res):
        print("YES")
    else: print("NO")
