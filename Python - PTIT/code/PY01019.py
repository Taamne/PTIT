t = int(input())
import math
def check(s):
    for i in range(0, len(s) // 2):
        if (math.fabs(ord(s[i]) -ord(s[i+1]))) != (math.fabs(ord(s[len(s)-1-i])-ord(s[len(s)-1-i-1]))):
            return False
    return  True
while t>0 :
    t=t-1
    s = input()
    if (check(s)):
        print("YES")
    else:
        print("NO")

