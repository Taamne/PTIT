from functools import reduce
from decimal import ROUND_HALF_UP, Decimal
class MH:
    cnt = 1

    def __init__(self ,name, score):
        self.id = f"HS{MH.cnt:02d}"
        MH.cnt+=1
        self.name = name
        # weighted = score[0] * 2 + score[1] * 2 + sum(score[2:])
        # self.dtb = float(Decimal(weighted / 12).quantize(Decimal('0.1'), ROUND_HALF_UP))
        self.dtb = (score[0]*2 + score[1]*2 + reduce(lambda x, y: x+y, score[2:]))/12

        self.dtb = (self.dtb).quantize(Decimal('0.1'), ROUND_HALF_UP)

    def xeploai(self):
        if self.dtb >= 9:
            return "XUAT SAC"
        elif self.dtb >= 8:
            return "GIOI"
        elif self.dtb >= 7:
            return "KHA"
        elif self.dtb >= 5:
            return "TB"
        else:
            return ("YEU")
lst=[]
for t in range(int(input())):
    name = input()
    score=list(map(Decimal, input().split()))
    lst.append(MH(name, score))
lst = sorted(lst, key= lambda s:(-(s.dtb), s.id))
for i in lst:
    print(i.id, i.name,i.dtb, i.xeploai())

# 3
# Luu Thuy Nhi
# 9.3  9.0  7.1  6.5  6.2  6.0  8.2  6.7  4.8  5.5
# Le Van Tam
# 8.0  8.0  5.5  9.0  6.8  9.0  7.2  8.3  7.2  6.8
# Nguyen Thai Binh
# 9.0  6.4  6.0  7.5  6.7  5.5  5.0  6.0  6.0  6.0

