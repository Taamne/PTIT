dongia={
    'xe_con':{'5':10000,
              '7':15000},
    'xe_tai':{'2':20000},
    'xe_khach':{'29':50000,
                '45':70000}
}
class inf:
    def __init__(self, line):
        a= line.lower().strip().split()
        self.loai= a[1]
        self.sl=a[2]
        self.tt=a[3]
        self.ngay= a[4]
        if(self.tt=="in"):
            self.gia= dongia[self.loai][self.sl]
        else:
            self.gia=0

class banggia:
    def __init__(self, ngay):
        self.ngay = ngay
        self.gia= 0
    def __str__(self):
        return self.ngay+": "+str(self.gia)
n=int(input())
lst=[]
lst2=[]
for i in range(n):
    lst.append(inf(input()))
for i in lst:
    check=False
    for j in lst2:
        if(i.ngay == j.ngay ):
            check=True
            break
    if not check:
        lst2.append(banggia(i.ngay))
for i in lst:
    for j in lst2:
        if(i.ngay == j.ngay):

            j.gia+=i.gia
for i in lst2:
    print(i)
# 5
# 30F-123.15 Xe_con 5 OUT 06/11/2021
# 30F-123.15 Xe_con 5 IN 06/11/2021
# 30H-123.15 Xe_con 7 IN 06/11/2021
# 29H-222.68 Xe_tai 2 IN 07/11/2021
# 30G-511.15 Xe_con 5 IN 07/11/2021

