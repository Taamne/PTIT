for t in range(int(input())):
    n,m = (int(i) for i in input().split())
    lst = list(map(int, input().split()))
    max_num = max(lst)
    pos=0

    pos=lst.index(max_num)
    lst.insert(pos,m)
    for i in lst:
        if i <0:
            print(i, end=" ")
    for i in lst:
        if i >=0:
            print(i, end=' ')
    print()