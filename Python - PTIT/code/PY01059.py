for t in range(int(input())):
    s = input()
    res = 0
    for i in range(len(s)):
        if i % 2 == 0:
            res += int(s[i])

    ok = False
    tich = 1
    for i in range(len(s)):
        if i % 2 == 1:
            if s[i] != '0':
                ok = True
                tich *= int(s[i])

    if ok:
        print(f"{res} {tich}")
    else:
        print(f"{res} 0")
