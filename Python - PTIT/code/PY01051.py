for t in range(int(input())):
    s = str(sum(int(i) for i in input()  ))
    if ( len(s)>=2 and s == s[::-1]):
        print("YES")
    else: print("NO")