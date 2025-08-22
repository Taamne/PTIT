t =int(input())
def nd(n):
    m =0
    while(n>0):
        d=n%10
        m=m*10+d
        n//=10
    return m
import  math
while t>0 :
    t-=1
    n = int(input())
    m = nd(n)
    if(math.gcd(m,n)==1):
        print("YES")
    else:
        print("NO")