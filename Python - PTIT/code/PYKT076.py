from  datetime import datetime
class FILM:
    cnt=1
    def __init__(self, idS, date, nameF, num ):
        self.idF = f"P{FILM.cnt:03d}"
        FILM.cnt+=1
        self.idS=idS
        self.nameF= nameF
        self.date = date
        self.num = num
    def set_nameS(self, nameS):
        self.nameS = nameS
    def __str__(self):
        return self.idF +" "+self.nameS+" "+self.date+" "+self.nameF+" "+self.num

class STYLE:
    cnt=1

    def __init__(self, nameS):
        self.idS = f"TL{STYLE.cnt:03d}"
        STYLE.cnt+=1
        self.nameS= nameS
lstS=[]
lstP=[]
n,m=input().split()
for i in range(int(n)):
    nameS=input()
    lstS.append(STYLE(nameS))
for i in range(int(m)):
    idS=input()
    date =input()
    nameF = input()
    num = input()
    lstP.append(FILM(idS, date, nameF, num))
for i in lstS:
    for j in lstP:
        if i.idS == j.idS:
            j.set_nameS(i.nameS)
lstP=sorted(lstP, key= lambda  i: datetime.strptime(i.date,"%d/%m/%Y"))
for i in lstP:
    print(i)


# 2 3
# Hai huoc
# Tinh cam
# TL001
# 25/11/2021
# Phim so 1
# 10
# TL001
# 04/12/2021
# Phim so 2
# 15
# TL002
# 25/11/2021
# Phim so 3
# 5