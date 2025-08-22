for t in range(int(input())):
    s = input()
    res =1
    for i in s:
        if i !='0':
            res*=int(i)
    print(res)