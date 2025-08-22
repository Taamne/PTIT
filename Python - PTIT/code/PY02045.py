s=input()
n=len(s)
while(len(s)>1):
    n1=s[:len(s)//2]
    n2=s[len(s)//2:]
    n=int(n1)+int(n2)
    s=str(n)
    print(s)


