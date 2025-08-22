class monhoc:
    def __init__(self, mamon, tenmon, hinhthuc):
        self.mamon = mamon
        self.tenmon= tenmon
        self.hinhthuc=hinhthuc
    def __str__(self):
        return self.mamon +" "+self.tenmon +" "+self.hinhthuc
lst=[]
for i in range(int(input())):
    mamon = input().strip()
    tenmon = input().strip()
    hinhthuc = input().strip()
    lst.append(monhoc(mamon, tenmon, hinhthuc))
lst=sorted(lst, key = lambda i : (i.mamon))
for i in lst:
    print(i)
# 2
# MUL1320
# Nhap mon da phuong tien
# Bai tap lon + Van dap truc tuyen
# BAS1203
# Giai tich 1
# Thi viet + Van dap truc tuyen