    for t in range(int(input())):
        s=input().split()
        # print(s)
        cnt = 0
        res = ''
        for ans in s:
            if len(res)+ len(ans) >100:
                break
            else:
                res+=ans+" "
        print(res)
        print(len(res))


