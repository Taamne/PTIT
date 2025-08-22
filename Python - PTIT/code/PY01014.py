s = input()
str=[]
str = s.split(" ")
a = int(str[0])
K = int(str[1])
N = int(str[2])
b = K - (a%K)
res =[]
m=a+b
while (m < N):


    res.append(b)
    b=b+K
    m = a + b
if len(res)>0:
    for i in res:
        print(i,end=" ")
else:
    print("-1")
