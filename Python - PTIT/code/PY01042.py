test = ['0','1','2']
t = int(input())
def check(s):
    for i in  s:
        if(i not in test):
            return False
    return True
while t>0:
    t-=1
    s =input()
    if(check(s)):
        print("YES")
    else:
        print("NO")

