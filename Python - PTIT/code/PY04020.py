class HD:
    def __init__(self, id, name, num, price, sale):
        self.id=id
        self.name= name
        self.num = num
        self.price = price
        self.sale = sale
        self.total = self.num*self.price - self.sale
    def __str__(self):
        return self.id +" "+self.name +" "+str(self.num)+" "+str(self.price) +" "+str(self.sale)+" "+str(self.total)
lst=[]
for t in range(int(input())):
    id = input()
    name = input()
    num = int(input())
    price = int(input())
    sale = int(input())
    lst.append(HD(id, name, num, price, sale))
lst=sorted(lst, key = lambda i: -(i.total))
for i in lst:
    print(i)


# 3
# ML01
# May lanh SANYO
# 12
# 4000000
# 2400000
# ML02
# May lanh HITACHI
# 4
# 2550000000
# 0
# ML03
# May lanh NATIONAL
# 5
# 3000000
# 150000