def to_id(name, dv):
    lst1=list(name.split())
    lst2 = list(dv.split())
    id=''
    for i in lst2:
        id+= i[0]
    for i in lst1:
        id+= i[0]
    id=id.upper()
    return id
def time(end):
    h,m= end.split(":")
    return (int(h) - 6) + (int(m)/60)
class VDV:
    def __init__(self, name, dv, end):
        self.id = to_id(name, dv)
        self.v= 120/time(end)
        self.name = name
        self.dv = dv
    def __str__(self):
        return self.id +" "+self.name +" "+self.dv+" "+f"{self.v:.0f}" +" Km/h"

lst=[]
for t in range(int(input())):
    name = input()
    dv = input()
    end = input().strip()
    lst.append(VDV(name,dv, end))
lst = sorted(lst, key= lambda i: -(i.v))
for i in lst:
    print(i)

# 3
# Tran Vu Minh
# Ha Noi
# 8:30
# Vu Ngoc Hoang
# Hoa Binh
# 8:20
# Pham Dinh Tan
# An Giang
# 8:45