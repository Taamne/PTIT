for t in range(int(input())):
    n=int(input())
    lst = list(map(int, input().split()))
    cnt=0
    for i in range(0,len(lst)-1):
        M=max(lst[i],lst[i+1])
        m=min(lst[i],lst[i+1])
        while 2*m < M:
            m=m*2
            cnt+=1
    print(cnt)

