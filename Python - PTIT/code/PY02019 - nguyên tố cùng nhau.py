from math import gcd
n = int(input())
lst = sorted(list(map(int, input().split())))
for i in range(0,len(lst)-1):
    for j in range(i+1,len(lst)):
        if gcd(lst[i],lst[j]) == 1:
            print(f"{lst[i]} {lst[j]}")
