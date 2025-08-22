n=int(input())
res=[]
for k in range(n):
    s=input()
    x=''
# g07bxjq3
    for i in range(0,len(s)):
        if(s[i].isdigit()):
            x+=s[i]
        else:
            if(x):
                res.append(int(x))
                x=''

    if(x):
        res.append(int(x))
res.sort()
# print(len(res))
for i in res:
    print(i)
# 3
# A129h
# G07bxjq3
# aaaaaaa4aaaa