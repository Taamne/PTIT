def time_to_num(time):
    h,m=time.split(":")
    return int(h)*60 + int(m)
class NV:
    def __init__(self, id , name, start, end):
        self.id=id
        self.name = name
        self.start = time_to_num(start)
        self.end = time_to_num(end)
        self.time = self.end - self.start-60
        self.tt= "DU" if(self.time>=480) else "THIEU"

    def __str__(self):
        return self.id +" "+self.name +" "+f"{self.time//60} gio {self.time%60} phut {self.tt}"
lst=[]
for t in range(int(input())):
    id=input().strip()
    name=input().strip()
    start=input().strip()
    end = input().strip()
    lst.append(NV(id, name, start,end))
lst=sorted(lst, key = lambda i:(-i.time))
for i in lst:
    print(i)
# 2
# 01T
# Nguyen Van An
# 08:00
# 17:30
# 06T
# Tran Hoa Binh
# 09:05
# 17:00
