for t in range(int(input())):
    s=input()
    str=''
    lst=[]
    for i in s:
        if i.isdigit():
            str+=i
        else:
            if str != '':

                lst.append(int(str))
                str=''
    if str != '':

                lst.append(int(str))
    lst = sorted(lst, reverse=True)
    print(lst[0])