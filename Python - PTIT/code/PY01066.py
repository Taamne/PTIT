import math
for t in range(int(input())):
    s = input()
    lst= []
    # acxz
    for i in range(1,len(s)):
        lst.append(abs(ord( s[i]) - ord(s[i-1])))
    check=True
    for i in range(0,len(lst)//2):
        if lst[i] != lst[len(lst)-1-i]:
            check=False
            break
    # print(lst)
    if check == True:
        print("YES")
    else: print("NO")
