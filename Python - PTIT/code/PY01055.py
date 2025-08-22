def isvalid(s):

    if len(s) %2 ==0 :
        return False
    if(s[0]==s[1]):
        return False
    for i in range(2, len(s),2):
        if s[0] != s[i]:
            return False
    return True
for t in range(int(input())):
    s= input()
    if isvalid(s):
        print("YES")
    else: print("NO")