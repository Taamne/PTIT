def check(s):
    if(len(s)%2!=0):
        return False
    if(int(s[0]) == int(s[2])):
        return False
    d=s[1]
    for i in range(0,len(s)):
        if(i%2!=0):
            if(s[i] != d ):
                return False
    return True
for t in range(int(input())):
    s=input()
    print("ÝES" if check(s) else "NO")