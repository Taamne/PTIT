mod = 10**9 +7
for t in range(int(input())):
    a,b = input().split()
    res =1
    for i in (int(a), int(b)+1):
        res*=i
    cnt=0
    for i in range(1,res//2):
        x=res//i
        if(x*i == res ):
            cnt+=1
            cnt= cnt%mod
    print(cnt)
