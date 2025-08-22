for t in range(int(input())):
    s=input()
    n=input()
    cnt=0
    index = 0
    pos=0
    while True:
        index = s.find(n,pos)
        if index == - 1:
            break
        cnt+=1
        pos =index+len(n)

    print(cnt)

