
def isvalid(s):
    if(len(s) % 2 ==1  or s!= s[::-1]):
        return False
    for i in s:
         if(int(i) %2 !=0):
             return  False
    return  True
t = int(input())
while t>0:
    t-=1
    n = int(input())
    for i in range(22,n,2):
        if(isvalid(str(i))):
            print(i,end=' ')
    print()