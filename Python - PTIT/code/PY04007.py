for t in range(int(input())):
    n,m= map(int, input().split())
    lst1=[]
    for  i in range(n):
        lst1.append(list(map(int, input().split())))
    # print(lst1)
    lst2=[]
    for j in range(m):
        lst=[]
        for i in range(n):
            lst.append(lst1[i][j])
        lst2.append(lst)
    # print(lst2)
    res=[]
    for i in range(n):
        lst=[]
        for j in range(n):
            s=0
            for k in range(m):
                s+=lst1[i][k]*lst2[k][j]
            lst.append(int(s))
        res.append(lst)
    for i in res:
        print(' '.join(map(str,i)))



# 1
# 2  2
# 1  2
# 3  4
