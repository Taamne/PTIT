for t in range(int(input())):
    n = int(input())
    lst = list(map(int, input().split()))
    lst = sorted(lst)
    l = min(lst)
    r = max(lst)
    cnt=0
    for i in range(l,r+1):
        if(i not in lst):
            cnt+=1
    print(cnt)