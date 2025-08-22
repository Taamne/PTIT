t = int(input())
while t>0:
    t=t-1
    s = input()
    res =[]
    tmp=s[0]
    cnt=1
    for i in range(1, len(s),1):
        if(tmp == s[i]):
            cnt  = cnt+1
        else:
            res.append(cnt)
            res.append(tmp)
            tmp=s[i]
            cnt=1
    res.append(cnt)
    res.append(tmp)
    for i in res :
        print(i,end="")
    print()

