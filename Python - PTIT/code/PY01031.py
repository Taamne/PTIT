for t in range(int(input())):
    n,b=map(int ,input().split())
    res=''
    while(n>0):
        r=n%b
        if(r<=9):
            res=str(r)+res
        else:
            res=chr(ord('A')+r-10)+res
        n//=b
    print(res)