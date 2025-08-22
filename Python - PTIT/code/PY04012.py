def to_point(s):
    point=10
    for i in s:
        if i == 'v':
            point -=2
        elif i =='m':
            point-=1
    return point

class SV:
    def __init__(self, id, name, clas):
        self.id= id
        self.name =  name
        self.clas = clas
        self.inf =''

        self.dk =''
    def set_inf(self, inf):
        self.inf=inf
        self.point = to_point(inf)
        if self.point ==0:
            self.dk = 'KDDK'
        else: self.dk =''
    def __str__(self):
        return self.id + " "+ self.name +" "+ self.clas +" "+str(self.point) + (' KDDK' if self.point == 0 else '')
t = int(input())
lst=[]
for i in range(t):
    id = input().strip()
    name = input().strip()
    clas = input().strip()
    lst.append(SV(id, name, clas))
for i in range(t):
    id, inf = input().strip().split()
    for x in lst:
        if x.id ==id:
            x.set_inf(inf)
for i in lst:
    print(i)

# 3
# B19DCCN999
# Le Cong Minh
# D19CQAT02-B
# B19DCCN998
# Tran Truong Giang
# D19CQAT02-B
# B19DCCN997
# Nguyen Tuan Anh
# D19CQCN04-B
# B19DCCN998 xxxmxmmvmx
# B19DCCN997 xmxmxxxvxx
# B19DCCN999 xvxmxmmvvm