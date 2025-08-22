from cmath import phase
from  datetime import  datetime

class CaThi:
    cnt=1
    def __init__(self, ngay, gio, phong):
        self.id= f"C{CaThi.cnt:03d}"
        CaThi.cnt+=1
        self.ngay = ngay
        self.gio = gio
        self.phong = phong
        self.day=datetime.strptime(f"{ngay} {gio}" , "%d/%m/%Y %H:%M")
    def __str__(self):
        return self.id +" "+self.ngay +" "+self.gio +" "+self.phong
lst=[]
f=[]
fr=open("CATHI.in", 'r')
for i in fr:
    if(i.strip()!=''):
        f.append(i.strip())
n=int(f[0])

for line in range(0,n):
    ngay=f[line*3+1]
    gio=f[line*3+2]
    phong= f[line*3+3]
    lst.append(CaThi(ngay, gio, phong))
lst= sorted(lst, key = lambda i : (i.day, i.id))
for i in lst:
    print(i)
