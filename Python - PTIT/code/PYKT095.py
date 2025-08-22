def chuan_hoa_ten(name):
    lst = name.lower().strip().split()
    s=''
    for i in lst:
        s+=i.title()+" "
    return s.strip()

class KH:
    cnt=1
    def __init__(self, tenKH, loaiKH, dau, cuoi):
        self.IDKH = f"KH{KH.cnt:02d}"
        KH.cnt+=1
        self.tenKH = chuan_hoa_ten(tenKH)
        if loaiKH =='A':
            self.dm= 100
        elif loaiKH =='B':
            self.dm = 500
        elif loaiKH =='C':
            self.dm = 200
        self.sodien = cuoi - dau
        if(self.sodien < self.dm):
            self.indm = self.sodien * 450
            self.outdm =0
            self.vat=0
        else:
            self.indm = self.dm*450
            self.outdm= (self.sodien - self.dm ) *1000
            self.vat = self.outdm // 20
        self.total = self.indm + self.outdm + self.vat
    def __str__(self):
        return self.IDKH +" "+self.tenKH +" "+str(self.indm)+" " +str(self.outdm)+" "+str(self.vat)+" "+str(self.total)
lst=[]
for t in range(int(input())):
    tenKH= input()
    loaiKH, dau, cuoi= input().split()
    lst.append(KH(tenKH,loaiKH, int(dau), int(cuoi)))
lst= sorted(lst, key = lambda i: -(i.total))
for i in lst:
    print(i)
# 2
#  nGuyEn Hong Ngat
# C 200 278
#  Chu thi    minh
# A 120 160