for t in range(int(input())):
    n= int(input())
    a= sorted(list(map(int,input().split())))
    b= sorted(list(map(int,input().split())))
    ok=True
    for i in range(0,n):
        if a[i] >b[i]:
            ok=False
            break
    if ok:
        print("YES")
    else: print("NO")
