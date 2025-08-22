def change(i):
    if(i<10):
        return str(i)
    return chr(ord('A') + i-10)
for t in range(int(input())):
    n,b = (int(i) for i in input().split())
    s=''
    while (n) >0:
       s+=change(n%b)
       n= n//b
    print(s[::-1])