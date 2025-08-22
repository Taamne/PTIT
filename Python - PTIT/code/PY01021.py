for t in range(int(input())):
    s=input()
    lst=[]
    res=0
    for i in s:
        if(i.isdigit()):
            res+=int(i)
        else:
            lst.append(i)
    lst.sort()
    for i in lst:
        print(i,end='')
    print(res)
