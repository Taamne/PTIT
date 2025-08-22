n = int(input())
lst=[]
for t in range(n):
    lst.append(input().split())
cnt=0
res=[]
check=0
for i in range(n):
    if(len(lst[i]) == 6 or len(lst[i])==8):
        style=1
        if (not res):
            res.append(style)
        elif style != res[-1]:
            res.append(style)
    else:
        check += 1
        if(check  ==4):

            style=2
            res.append(style)
            check=0




print(len(res))
for i in res:
    print(i)
# 12
# Minh ve minh co nho ta
# Muoi lam nam ay thiet tha man nong
# Minh ve minh co nho khong
# Nhin cay nho nui nhin song nho nguon
# Mot canh hai canh lai ba canh
# Tran troc ban khoan giac chang lanh
# Canh bon canh nam vua chop mat
# Sao vang nam canh mong hon bay
# Mot canh hai canh lai ba canh
# Tran troc ban khoan giac chang lanh
# Canh bon canh nam vua chop mat
# Sao vang nam canh mong hon bay
