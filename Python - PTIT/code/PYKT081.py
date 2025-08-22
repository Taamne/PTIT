def check(s):
    ls=s.split(".")
    if(len(ls)!=4):
        return False
    for i in ls:
        if not i.isdigit():
            return False
        if(int(i)<0 or int(i) > 255):
            return False
    return True
for t in range(int(input())):
    s=input()
    print("YES" if check(s) else "NO")
