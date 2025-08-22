for t in range(int(input())):
    s1=input().lower().split()
    s2= input().split()
    res=[]
    for i in s2:
        if(i.lower() in s1 and  i not in res):
            res.append(i)
    for i in res:
        print(i, end=" ")
    print()
# 2
# ab dB aa bc da
# dB BC ca cd
# tin hoc co so 2
# 2 Tin tin chi