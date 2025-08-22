t = int(input())
while t>0:
    t=t-1
    s= input()
    res=[]
    for i in s:
        if i.isalpha():
            tmp = i
        else:
            for j in range (0, int(i), 1):
                res.append(tmp)

    for i in res :
        print(i,end="")
    print()