# from collections import Counter
#
# for t in range(int(input())):
#     n,m,k=map(int, input().split())
#     lsta=list(map(int, input().split()))
#     lstb=list(map(int, input().split()))
#     lstc=list(map(int, input().split()))
#
#     ca=Counter(lsta)
#     cb = Counter(lstb)
#     cc= Counter(lstc)
#     res=list(set(lsta) & set(lstb) &set(lstc))
#
#     if(not len(res)):
#         print("NO")
#     else:
#         for i in res:
#             for j in range(min(cc[i],ca[i],cb[i])):
#                 print(i,end=" ")
#     print()
# 3
# 6 5 8
# 1 5 10 20 40 80
# 5 7 20 80 100
# 3 4 15 20 30 70 80 120
# 3 5 4
# 1 5 5
# 3 4 5 5 10
# 5 5 10 2
# 3 3 3
# 1 2 3
# 4 5 6
# 7 8 9
for t in range(int(input())):
    n,m,k=map(int, input().split())
    lsta=list(map(int, input().split()))
    lstb=list(map(int, input().split()))
    lstc=list(map(int, input().split()))
    ab=[]
    j=i=0
    while(i<n and j < m):
        if(lsta[i] == lstb[j]):
            ab.append(lsta[i])
            i += 1
            j += 1
        elif lsta[i] < lstb[j]:
            i+=1
        else:
            j+=1
    j=i=0
    res=[]
    while(i < k and j<len(ab)):
        if (lstc[i] == ab[j]):
            res.append(lstc[i])
            i+=1
            j+=1
        elif lstc[i] < ab[j]:
            i += 1
        else:
            j += 1
    if(not len(res)):
        print("NO")
    else:
        for i in res:
            print(i,end = " ")
    print()

