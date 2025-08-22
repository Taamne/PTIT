from datetime import datetime
class MONHOC:
    def __init__(self, mamon, tenmon, hinhthuc):
        self.mamon= mamon.strip()
        self.tenmon = tenmon
        self.hinhthuc= hinhthuc
class CATHI:
    cnt=1
    def __init__(self, ngaythi, giothi, phongthi):
        self.macathi = f"C{CATHI.cnt:03d}"
        CATHI.cnt+=1
        self.ngaythi = ngaythi
        self.giothi= giothi
        self.phongthi= phongthi
class LICHTHI:
    def __init__(self, macathi, mamon, manhom, num):
        self.mamon= mamon
        self.macathi= macathi
        self.manhom= manhom
        self.num = num
    def set_ngaythi(self, ngaythi):
        self.ngaythi=ngaythi

    def set_giothi(self, giothi):
        self.giothi = giothi
    def set_phongthi(self, phongthi):
        self.phongthi = phongthi
    def set_tenmon(self, tenmon):
        self.tenmon= tenmon
    def __str__(self):
        return self.ngaythi +" "+self.giothi +" "+self.phongthi +" "+self.tenmon+" "+self.manhom+" "+self.num
fr1= open("MONTHI.in", 'r')
monthi= fr1.readlines()
fr2= open("CATHI.in", 'r')
cathi= fr2.readlines()
fr3= open("LICHTHI.in", 'r')
lichthi= fr3.readlines()
n=int(monthi[0])
monthis=[]
cathis=[]
lichthis=[]
for i in range(n):
    mamon = monthi[i*3+1].strip()
    tenmon = monthi[i*3+2].strip()
    hinhthuc= monthi[i*3+3].strip()
    monthis.append(MONHOC(mamon, tenmon, hinhthuc))

n=int(cathi[0])
for i in range(n):
    ngaythi= cathi[3*i+1].strip()
    giothi = cathi[3*i+2].strip()
    phongthi = cathi[3*i+3].strip()
    cathis.append(CATHI(ngaythi, giothi, phongthi))
n = int(lichthi[0])
for i in range(n):
    macathi, mamon, manhom, num=map(str, lichthi[i+1].strip().split())
    lichthis.append(LICHTHI(macathi, mamon, manhom, num))
for i in monthis:
    for j in lichthis:
        if(i.mamon==j.mamon):
            j.set_tenmon(i.tenmon)
for i in cathis:
    for j in lichthis:
        if(i.macathi == j.macathi):
            j.set_giothi(i.giothi)
            j.set_ngaythi(i.ngaythi)
            j.set_phongthi(i.phongthi)

lichthis= sorted(lichthis, key= lambda i : (datetime.strptime(i.ngaythi+" "+i.giothi,'%d/%m/%Y %H:%M'), i.macathi))
for i in lichthis:
    print(str(i))





