

class HD:
    cnt=1
    def __init__(self, name, old, new):
        self.id = f"KH{HD.cnt:02d}"
        HD.cnt+=1
        self.name = name
        self.num = new - old
    def TinhTien(self):
        price=0
        ser=0
        if self.num <=50:
            price = (self.num * 100)
            return price + price*0.02
        elif self.num <= 100:
            price = ((self.num - 50) * 150  +( 50 * 100) )
            return price + price * 0.03
        else:
            price = (self.num - 100) * 200 + 50 *100 + 50 * 150
            return price + price * 0.05
lst =[]
for t in range(int(input())):
    name = input()
    old = int(input())
    new = int(input())
    lst.append(HD(name, old, new))
lst = sorted(lst, key= lambda i : (-(i.TinhTien()), i.id))
for i in lst:
    print(i.id, i.name, f'{i.TinhTien():.0f}')
# 3
# thanh
# 468
# 500
# le duc cong
# 160
# 230
# ha hue anh
# 410
# 612