t = int(input())
def check(s):
    first = s[0]

    second = s[1]
    if len(s) ==2:
        if first == second:
            return False
    else:
        for i in range(2, len(s), 1):
            if (i % 2 == 0 ) and (s[i] != first):
                return False
            if (i % 2 !=0) and (s[i] != second):
                return False
    return True
while t>0:
    t-=1
    s = input()
    if (check(s)):
        print("YES")
    else:
        print("NO")