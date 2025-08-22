from itertools import permutations
for t in range(int(input())):
    n=int(input())
    lst=[int(i) for i in range(1,n+1)]
    res = permutations(lst)
    res=sorted(res, reverse=True)
    print(len(res))
    for i in res:
        for j in i:
            print(j,end="")
        print(end=" ")
    print()