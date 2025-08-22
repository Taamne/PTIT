from itertools import permutations
s=input()
lst=[str(i) for i in s]
res= list(permutations(lst))
for i in res:
    for j in i:
        print(j,end="")
    print()