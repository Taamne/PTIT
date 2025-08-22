def check(s):

    for i in range(0, len(s)):
        if (int(s[i]) != 7) and (int(s[i]) != 4):
            return 0
    return 1
n = int(input())
while n>0:
    n-=1

    s = input()
    s = list(s)
    if(check(s)==1):
        print("YES")
    else:
        print("NO")
