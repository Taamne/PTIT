while True:
    lst = list(map(int, input().split()))
    if lst.count(0)==4:
        break
    else:
        # 1 3  5 9
        cnt =0
        while lst.count(lst[0]) !=4:
            #  cnt=1
            cnt+=1
            # tmp=1
            tmp = lst[0]
            for i in range(0,3):
                #  2 2 4
                lst[i]= abs(lst[i] - lst[i+1])
            lst[3] = abs(tmp-lst[3])
        print(cnt)

