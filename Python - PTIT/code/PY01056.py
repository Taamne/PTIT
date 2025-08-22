import math
def checknt(n):
    res = sum(int(i) for i in n)

    if res < 2:
        return False
    for i in range(2, math.isqrt(res) + 1):
        if res % i == 0:
            return False
    for i in range(1,len(n),2):
        if(int(n[i]) %2 ==0 ):
            return False
    for i in range(0, len(n), 2):
        if (int(n[i]) % 2 != 0):
            return False

    return True
for t in range(int(input())):
    s = input()
    if checknt(s):
        print("YES")
    else: print("NO")
