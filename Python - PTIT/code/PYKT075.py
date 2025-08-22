from  sys import stdin
class inf:
    def __init__(self, ngay, ten, sdt):
        b=ngay.strip().split()

        self.ngay = b[-1]
        self.ten = ten
        self.sdt= sdt
        a=self.ten.lower().strip().split()
        a = [i.title() for i in a]

        self.mid=a[:-1]
        self.first= a[-1]
    def __str__(self):
        return self.ten +": "+self.sdt+" "+self.ngay
try:
    fr = open("SOTAY.txt")
except:
    fr = stdin
lines= [line.strip() for line in fr if line.strip() !='']
i=0
lst=[]
while i<len(lines):
    s1= lines[i]
    i+=1
    if(s1.count('/') >0):
        ngay = s1

        ten=lines[i]
        sdt=lines[i+1]
        i+=1
    else:
        ten = s1
        sdt= lines[i]
    i+=1
    lst.append(inf(ngay, ten, sdt))
lst= sorted(lst, key = lambda i : (i.first, i.mid))
for i in lst:
    print(i)




