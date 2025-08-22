for t in range(int(input())):
    s=input()
    c=0
    l=1
    for i in range(0,len(s)):
        if(i % 2!=0):
            c+=int(s[i])
        else:
            if(int(s[i])!=0):
                l*=int(s[i])
    print(c,l)
    if(c==0):
        print("INVALID")
    else:
        print(f"{l/c:.06f}")

