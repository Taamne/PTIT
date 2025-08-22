n = int(input())
import math
lst = sorted([int(i) for i in input().split()])
for i in range(0,len(lst)-1):
    for j in range(i+1, len(lst)):
        if(math.gcd(lst[i],lst[j]) == 1):
            print("{0} {1}".format(lst[i],lst[j]))#
            # print(str(lst[i]), str(lst[j]))
