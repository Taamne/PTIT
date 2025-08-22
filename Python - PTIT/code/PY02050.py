for t in range(int(input())):
    n = int(input())
    a= list(map(int, input().split()))
    b=[]
    res=[0]*n
    pos=0
    for i in range(n):
        while len(b) > 0 and a[b[-1]] <= a[i]:
            b.pop()
        res[i]=i+1 if len(b) ==0 else i-b[-1]
        b.append(i)
    print(*res)