def check(s):
    for i in s:
        if(i!= '6' and i!='8'):
            return False
    if(not s.startswith('6')  ):
        return False
    return True

s=input()
print("YES" if check(s) else "NO")