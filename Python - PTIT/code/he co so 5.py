def check(s):
    for i in s:
        if i not in ["0","1","2","3","4"]:
            return False
    return True
for t in range(int(input())):
    s=input()
    print("YES" if check(s) else "NO")