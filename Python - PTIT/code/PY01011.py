t = int(input())
def tn(n):
    if(len(n) % 2 ==0):
        return false

    for i in range(0, len(n)/2, 1):
        if( n[i] != n[len(n)-i-1] or (int(n[i]) %2 !=0)):
            return false
    return true

while t>0 :
    t-=1
    n = int(input())
    for i in range()