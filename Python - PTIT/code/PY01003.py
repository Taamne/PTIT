n=int(input())
while n>0:
    n-=1
    s = input()
    if(len(s) ==1) :
        print(s)
    else:
        s=list(s)
        for i in range(len(s)-1,0, -1):
            if(int(s[i]) >=5):
                s[i - 1] = str(int(s[i - 1]) + 1)  # Carry over
            s[i] = '0'
        x=''
        for i in range(0, len(s), 1):
            x+=s[i]
        print(x)
