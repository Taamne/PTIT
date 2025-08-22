for t in range(int(input())):
    n=int(input())
   # lst = sorted(list(map(int, input().split())))
    lst = sorted([int(i) for i in input().split()])

    cnt=0
    for i in range(0,len(lst)-2):
        l,r=i+1, n-1
        while l<r:
            tmp= lst[i]+lst[l]+lst[r]
            if not tmp:
                cnt+=1
                l+=1
            elif tmp<0:
                l+=1
            else:
                r-=1
    print(cnt)

