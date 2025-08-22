kvdic={'1':1.5, '2':1.0, '3':0.0    }
def chuan_hoa_ten(name):
    lst=name.lower().strip().split()
    name=''
    for i in lst:
        name+=i.title()+" "
    return name.strip()
class TS:
    cnt=1
    def __init__(self, name, point, dt, kv):
        self.id = f"TS{TS.cnt:02d}"
        TS.cnt+=1
        self.name = chuan_hoa_ten(name)
        self.point=point
        self.ut= kvdic[kv]
        if dt.lower() =='kinh':
            self.ut+=0
        else:
            self.ut+=1.5
        self.total= self.point+self.ut
        self.xl="Do" if self.total >=20.5 else "Truot"
    def __str__(self):
        return self.id+" "+self.name+f" {(self.total):.1f}"+" "+self.xl
lst=[]
for t in range(int(input())):
    name=input().strip()
    point=float(input())
    dt=input()
    kv=input()
    lst.append(TS(name, point, dt, kv))
lst=sorted(lst, key = lambda i: (-i.total, i.id))
for i in lst:
    print(i)
# 2
# Nguyen  hong ngat
# 22
# Kinh
# 1
#   Chu thi MINh
# 14
# Dao
# 3
