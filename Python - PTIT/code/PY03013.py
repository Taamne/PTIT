for t in range(int(input())):
    cs=[0]*10
    a,b=map(int, input().split())
    for i in range(a,b+1):
        s=str(i)
        for j in s:
            cs[int(j)]+=1
    for i in cs:
        print(i, end=" ")
    print()