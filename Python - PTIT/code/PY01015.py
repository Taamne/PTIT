def check(s):
    tmp = -1
    for i in range(0, len(s)-2,1):
        if(int(s[i] ) > int(s[i+1])):
            return  False
    return True
t = int(input())
while(t>0):
    t=t-1
    s= input()
    if(check(s)):
        print("YES")
    else:
        print("NO")