from itertools import combinations
n,k=map(int, input().split())
lst=sorted(list(set(map(int, input().split()))))
res=list(combinations(lst,k))
for i in res:
    for j in i:
        print(j, end=" ")
    print()