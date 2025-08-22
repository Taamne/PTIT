t =int(input())
import  math
while t>0 :
    t=t-1
    n =int(input())
    print("1",end="")
    for i in range(2,math.isqrt(n) ):

        if  n%i==0 :
            if n!=1:
                print(" *",end=" ")
            cnt = 0
            while(n%i==0):
                cnt+=1
                n//=i
            print("{0}^{1}".format(i,cnt),end="")
    if(n!=1):
        print(" * {0}^1".format(n))
    else:
        print()

