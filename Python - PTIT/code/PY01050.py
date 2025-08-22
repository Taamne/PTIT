def Try(s,n,a,b,c):
    if n==len(s) and a>0 and b>=a and c>=b:
        print(s)
    if n >len(s):
        Try(s+'A',n,a+1,b,c)
        Try(s+'B',n,a,b+1,c)
        Try(s+'C',n,a,b,c+1)


n= int(input())
for i in range(3, n+1):
    Try('',i,0,0,0)