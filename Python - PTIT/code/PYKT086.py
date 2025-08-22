from sys import stdin
try:
    fr = open('DATA.in','r')
except:
    fr=stdin
lst = [i.strip() for i in fr if i.strip()!='']
cnt=0
n=lst[0]
num= ['0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F']
for i in range(int(n)):
    b=int(lst[cnt+1])
    n=lst[cnt+2]
    cnt+=2
    x=int(n,2)
    res=""
    while x>0:
        res=num[x%b]+res
        x//=b
    print(res)




