from  datetime import datetime
def dv(num):
    if num[0] == '1':
        return 25
    elif num[0] =='2':
        return 34
    elif num[0] == '3':
        return 50
    elif num[0] == '4':
        return 80
class KH:
    cnt=1
    def __init__(self, name, num, start, end, ser):
        self.id = f"KH{KH.cnt:02d}"
        KH.cnt+=1
        self.num=num
        self.name = name
        self.price = dv(self.num)
        self.days =( datetime.strptime(end,"%d/%m/%Y") - datetime.strptime(start,"%d/%m/%Y")).days +1
        self.ser = ser
        self.total = self.price * self.days + self.ser
    def __str__(self):
        return self.id +" " + self.name + " " + self.num +" " +str(self.days) +" "+str(self.total)
lst=[]
for t in range(int(input())):
    name = input()
    num=input()
    start = input()
    end = input()
    ser = int(input())
    lst.append(KH(name, num, start, end, ser))
lst= sorted(lst, key = lambda i: -i.total)
for i in lst:
    print(i)
# 3
# Huynh Van Thanh
# 103
# 05/06/2010
# 05/06/2010
# 15
# Le Duc Cong
# 106
# 08/03/2010
# 01/05/2010
# 220
# Tran Thi Bich Tuyen
# 207
# 10/04/2010
# 21/04/2010
# 96