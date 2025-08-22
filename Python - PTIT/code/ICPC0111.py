for t in range(int(input())):
    n,d= map(int, input().split())
    lst1 = list(map(int, input().split()))
    d=d%n
    lst2=[]
    for i in range( d , n):
        lst2+= [lst1[i]]

    for i in range(0,d):
        lst2+=[ lst1[i]]
    for i in lst2:
        print(i,end=' ')
    print()