bang_he_so = {
    'A': [10, 12, 14, 20],
    'B': [10, 11, 13, 16],
    'C': [9, 10, 12, 14],
    'D': [8, 9, 11, 13],
}


def get_index(nam):
    if 1 <= nam <= 3:
        return 0
    elif 4 <= nam <= 8:
        return 1
    elif 9 <= nam <= 15:
        return 2
    else:
        return 3
class Phong:
    def __init__(self, idP, nameP):
        self.idP = idP
        self.nameP=nameP
class NV:
    def __init__(self, idNV, nameNV, luong, day ):
        self.idNV=idNV
        self.pl=self.idNV[0]
        self.nam=int(self.idNV[1:3])
        self.idP=self.idNV[3:]
        self.nameNV = nameNV
        self.luong= luong
        self.day = day
        self.set_hs()
        self.total = self.luong*self.day*self.hs*1000

    def set_hs(self):
        self.hs = bang_he_so[self.pl][get_index(self.nam)]
    # def set_total(self):
    def set_nameP(self, nameP):
        self.nameP= nameP
    def __str__(self):
        return self.idNV +" "+self.nameNV+" "+self.nameP+" "+str(self.total)

lstP=[]
lstNV=[]
for i in range(int(input())):
    s = input().strip()
    idP= s[:2]
    nameP=s[3:]
    lstP.append(Phong(idP, nameP))
for i in range(int(input())):
    idNV= input()
    nameNV=input()
    luong=int(input())
    day = int(input())
    lstNV.append(NV(idNV, nameNV, luong, day))
for i in lstP:
    for j in lstNV:
        if i.idP ==j.idP:
            j.set_nameP(i.nameP)
for i in lstNV:
    print(i)
# 2
# HC Hanh chinh
# KH Ke hoach Dau tu
# 2
# C06HC
# Tran Binh Minh
# 65
# 25
# D03KH
# Le Hoa Binh
# 59
# 24