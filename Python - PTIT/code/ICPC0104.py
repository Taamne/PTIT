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
    lst = sorted(lst)
    print(lst[0])