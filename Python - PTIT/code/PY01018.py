p = "ABCDEFGHIJKLMNOPQRSTUVWXYZ_."
while(True):
    ip = input()
    str =[]
    str = ip.split(" ")
    k = int(str[0])
    if k == 0:
        break
    s = str[1]
    res =[]
    for i in range(0,len(s), 1):
        x =( p.find(s[i]) +k) % 28
        res.append(p[x])
    res.reverse()
    for i in res:
        print(i, end="")
    print()