from  math import isqrt
def checknt(n):
    if n < 2:
        return False
    for i in range(2, isqrt(n)+1):
        if n % i ==0:
            return  False
    return True
n=int(input())
lst = list(int(i) for i in map(int, input().split() ) if checknt(i))
num = {}
for i in lst:
    num[i] = num.get(i,0)+1
for i in num:
    print(f"{i} {num[i]}")