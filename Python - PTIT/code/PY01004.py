import math
from difflib import Match

prime= [0]*1000005
def sieve():
    for i in range (0, 1000001,1):
        prime[i]=1
    prime[0] = prime[1] = 0
    for i in range (2, 1001, 1):
        if prime[i]==1:
            for j in range(i*2, 1000001, i):
                prime[j] =0
sieve()
n = int(input())
while n > 0 :
    n-=1
    x = int(input())
    cnt=0
    for i in range (1,x, 1 ):
        if math.gcd(i,x)==1:
            cnt+=1
    if(prime[cnt]==1):
        print("YES")
    else:
        print("NO")


