class GV:
    dic1 ={'1' :2.0, '2':1.5, '3': 1.0,'4' : 0.0}
    dic2 ={'A' :'TOAN', 'B':"LY", 'C': "HOA"}

    cnt=1
    def __init__(self, name, xt, m1, m2):
        self.id = f'GV{GV.cnt:02d}'
        GV.cnt+=1
        self.name = name
        self.ut=GV.dic1[xt[1]]
        self.total = self.ut + m1*2 + m2
        self.res = "TRUNG TUYEN" if self.total>=18 else "LOAI"
        self.mon = GV.dic2[xt[0]]
    def __str__(self):
        return self.id +" "+self.name +" "+self.mon+ f" {self.total:.1f} " + self.res
lst =[]
for t in range(int(input())):
    name= input()
    xt= input()
    m1=float(input())
    m2= float(input())
    lst.append(GV(name, xt, m1,m2))
lst=sorted( lst, key=  lambda i: -(i.total))
for i in lst:
    print(i)
# 3
# Le Van Binh
# A1
# 7.0
# 3.0
# Tran Van Toan
# B3
# 4.0
# 7.0
# Hoang Thi Tam
# C2
# 7.0
# 6.0
