from datetime import datetime
class MonHoc:
    def __init__(self, idMH, name):
        self.idMH=idMH
        self.name = name
class LichThi:
    cnt=1
    def __init__(self, idMH, date, time, nhom):
        self.idcathi = f"T{LichThi.cnt:03d}"
        LichThi.cnt+=1
        self.idMH = idMH
        self.date = date
        self.time = time
        self.nhom  = nhom
    def set_name(self,name):
        self.name=name
    def __str__(self):
        return self.idcathi +" "+self.idMH +" "+self.name +" "+self.date +" "+self.time +" "+self.nhom
lstMH=[]
lstLT=[]
n,m=map(int,input().split())
for i in range(n):
    idMH = input()
    name=input()
    lstMH.append(MonHoc(idMH,name))
for i in range(m):
    idMH, date, time, nhom= input().split()
    lstLT.append(LichThi(idMH, date,time,nhom))
for i in lstMH:
    for j in lstLT:
        if i.idMH == j.idMH:
            j.set_name(i.name)
lstLT=sorted(lstLT, key = lambda i:( datetime.strptime(i.date + " " +i.time,'%d/%m/%Y %H:%M'),i.idMH))
for i in lstLT:
    print(i)
# 2 10
# INT1155
# Tin hoc co so 2
# INT1339
# Ngon ngu lap trinh C++
# INT1155 25/11/2021 08:00 01
# INT1155 04/12/2021 08:00 02
# INT1155 04/12/2021 13:30 03
# INT1155 25/11/2021 13:30 04
# INT1155 25/11/2021 15:00 05
# INT1339 25/11/2021 08:00 01
# INT1339 25/11/2021 08:00 02
# INT1339 04/12/2021 13:30 03
# INT1339 04/12/2021 13:30 04
# INT1339 04/12/2021 15:00 05