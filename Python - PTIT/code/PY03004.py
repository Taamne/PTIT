import re

regex=r'[^a-z0-9]'
lst=[]
t,k=map(int, input().split())
for l in range(t):
    line = re.split(regex, input().lower().strip())
    for i in line:
        if(i.strip()!=" "):
            lst.append(i.lower().strip())
map_lst = {}
for i in lst:
    map_lst[i]=map_lst.get(i,0)+1
Sort = sorted(map_lst.items(),key= lambda i: (-i[1],i[0]))
for i,j in Sort:
    if(i!="" and j>=k):

        print(i,j)

# 3 2
# PTIT duy tri hoc phi on dinh nam 2019 va khong tang trong nam 2020-2021 va 2021-2022!
# Khi dich benh xuat hien PTIT trich hon 6 ty dong ho tro sinh vien PTIT
# voi muc ho tro 500000 dong/sinh vien PTIT.
