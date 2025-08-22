class TS:
    cnt=1
    def __init__(self, name, lt, th):
        self.id=f"TS0{TS.cnt}"
        TS.cnt+=1
        self.name  = name
        self.lt= (lt if(lt<=10) else lt/10)
        self.th = (th if (th <=10 ) else th/10)
        self.sum = (self.lt+self.th)/2
        if self.sum<5:
            self.xeploai = "TRUOT"
        elif self.sum <8:
            self.xeploai = "CAN NHAC"
        elif self.sum <9.5:
            self.xeploai="DAT"
        else :
            self.xeploai = "XUAT SAC"
lst =[]
for t in range(int(input())):
    name = input()
    lt= float(input())
    th = float(input())
    lst.append(TS(name, lt, th))
lst = sorted(lst, key = lambda i: (-(i.sum), i.id))
for i in lst:
    print(i.id, i.name, f"{i.sum:.2f}", i.xeploai)

