s= input()
str=[]
str = s.split(" ")
n = int(str[0])
k = int(str[1])
import math
cnt=-1
for i in range (int(math.pow(10,k-1)),int( math.pow(10,k))):
    if(math.gcd(i,n)==1):
        cnt+=1
        if cnt==10:
            print()
            cnt=0
        print(i ,end=" ")

