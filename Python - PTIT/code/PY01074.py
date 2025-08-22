import math
res=0
for t in range(int(input())):
    n = int(input())
    for i in range(2,math.isqrt(n)+1,1):
        if ( n % i ==0):
            while n%i ==0:
                res += i

                n//=i
    if n>1:
        res+=n
print(res)