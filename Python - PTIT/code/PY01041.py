def check(s):
    if len(s)<3:
        return False
    ok=False
    pos=0
    for i in range(1,len(s)-1):
        if s[i-1] < s[i] and s[i] >s[i+1]:
            ok=True
            pos = i
            break
    if ok:

        for i in range(1,pos+1):
            if s[i-1] >= s[i] :
                return False
        for i in range(pos,len(s)-1):
            if s[i] <= s[i + 1]:
                return False
    return True
for t in range(int(input())):
    s= input()
    if(check(s)):
        print("YES")
    else: print("NO")