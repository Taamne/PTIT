from tabnanny import check

t = int(input())
def nd(n):
    m =0
    while (n>0):
        d= n%10
        m=m*10 +d
        n//=10
    return m
while t>0:
    res = False

    t-=1
    n = int(input())
 ##   print(nd(n))
    cnt=0
    if n % 7==0:
        print(n)
        break
    else:
        while(cnt<1000):
            cnt+=1
            m=nd(n)
            n=n+m
            if n % 7 ==0:
                res = True

                break

        if res:
            print(n)
        else:
            print(-1)

