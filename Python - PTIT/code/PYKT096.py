class TEAM :
    cnt=1
    def __init__(self, ten, truong):
        self.maT = f"Team{TEAM.cnt:02d}"
        TEAM.cnt +=1
        self.ten = ten
        self.truong= truong
class TS:
     cnt=1
     def __init__(self, tenTS, maT):
        self.maTS = f"C{TS.cnt:03d}"
        TS.cnt+=1
        self.tenTS=tenTS
        self.maT= maT
     def set_ten(self, ten):
        self.ten = ten
     def set_truong(self,truong):
         self.truong=truong
     def __str__(self):
         return self.maTS+" "+self.tenTS +" "+self.ten+" "+self.truong
lstT = []
lstTS=[]
for i in range(int(input())):
    ten=input().strip()
    truong= input().strip()
    lstT.append(TEAM(ten, truong))
for i in range(int(input())):
    tenTS=input().strip()
    maT=input().strip()
    lstTS.append(TS(tenTS, maT))
for i in lstT:
    for j in lstTS:
        if i.maT == j.maT:
            j.set_truong(i.truong)
            j.set_ten(i.ten)
lstTS = sorted(lstTS, key = lambda i : (i.tenTS))
for i in lstTS:
    print(i)
# 2
# BAV_MIS
# Banking Academy of Vietnam
# FTU Knights1
# Foreign Trade University
# 6
# Le Trung Toan
# Team01
# Nguyen Trinh Quoc Long
# Team01
# Giang Minh Tung
# Team01
# Nguyen Hang Giang
# Team02
# Nguyen Thanh Nhan
# Team02
# Nguyen Viet Duc
# Team02