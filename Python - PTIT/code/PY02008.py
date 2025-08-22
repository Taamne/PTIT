
def sieve():
    prime = [0] * 1000000

    for i in range(2,1000000):
        prime[i]=1
    for i in range(2, 1000):
        if(prime[i]==1):
            for j in range(i*i, 1000000, i):
                prime[j] =0
    return prime
prime= sieve()

n,x= map(int, input().split())
cnt=0
print(x,end=' ')
tmp=x
for i in range(1,1000000):
    if ( prime[i]==1):
        # print(i)
        cnt+=1
        print(i+tmp,end=' ')
        tmp=i+tmp
        if cnt==n:
            break


