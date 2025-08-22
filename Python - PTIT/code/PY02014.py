
MAXX=10**6
prime=[1]*MAXX
def stieve():
    prime[0]=prime[1]=0
    for i in range(2,1000):
        if(prime[i]==1):
            for j in range(i*i, 1000000, i):
                prime[j]=0
stieve()
# for i in range(1,100):
#     print(i,prime[i])
n=int(input())
lst=list(map(int, input().split()))
Max=0
for i in lst:
    if(prime[i]!=1):
        u=i
        d=i
        checku=False
        checkd=False
        while u < 10000:
            if prime[u]:
                checku=True
                break
            u += 1
        if(checku):
            cntu=u-i
        else:cntu=0
        while d>=2:
            if prime[d]:
                checkd=True
                break
            d-=1
        if(checku and checkd):
            m1=max(u-i,d-i)
            Max=max(m1,Max)
        elif checku:
            Max=max(u-i,Max)
        elif checkd:
            Max=max(i-d,Max)
print(Max)


# 8
# 13 5 8 7 9 15 26 34
