s=input()
while len(s)%3 !=0:
    s='0'+s
res=''
# 011001100
for i in range(0,len(s)-2,3):
    x=int(s[i+2])+ int(s[i+1]) * 2+ int(s[i])*4
    res+=str(x)
print(res)
