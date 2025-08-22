t = int(input())
while t > 0:
    t-=1
    s = input()
    str = []
    str= s.split(" ")

    n = float(str[0])
    x = float(str[1])/100
    m = float(str[2])
    cnt=0
    while(n<m):
        n+= n*x
        cnt+=1

    print(cnt)