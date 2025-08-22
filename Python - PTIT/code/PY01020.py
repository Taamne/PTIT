t = int(input())
while t >0 :
    t=t-1
    s = input()
    if len(s) <2 :
        print("NO")

    else:
        if ((s[len(s)-1]== '6') and (s[len(s)-2] == '8')):
            print("YES")
        else:
            print("NO")