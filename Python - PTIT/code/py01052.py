import math
def checknt(n):
    if n < 2:
        return False
    for i in range(2, math.isqrt(n) + 1):
        if n % i == 0:
            return False
    return True

for t in range(int(input())):
    s = (sum(int(i) for i in input()))
    if ( checknt(s)):
        print("YES")
    else: print("NO")