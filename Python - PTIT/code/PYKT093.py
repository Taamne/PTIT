import math
def chuan_hoa_ten(name):
    lst=name.lower().strip().split()
    name=''
    for i in lst:
        name+=i.title()+" "
    return name.strip()
class SV:
    cnt=1
    def __init__(self, name, m1,m2,m3):
        self.id=f"SV{SV.cnt:02d}"
        SV.cnt+=1
        self.name=chuan_hoa_ten(name)
        self.m1=m1
        self.m2=m2
        self.m3=m3
        self.dtb= math.ceil((m1*3+m2*3+m3*2)/8 * 100) / 100
    def set_rank(self,rank):
        self.rank = rank
    def __str__(self):
        return self.id +" "+self.name+" "+f"{self.dtb:.2f} "+str(self.rank)
lst=[]
for i in range(int(input())):
    name=input().strip()
    m1=float(input())
    m2=float(input())
    m3=float(input())
    lst.append(SV(name, m1, m2, m3))
lst=sorted(lst, key = lambda i: (-i.dtb,i.id))
rank=1
cnt=0
maxdiem = lst[0].dtb


# for i in range(1, len(lst)):
for i in lst:
    if i.dtb == maxdiem:
        i.set_rank(rank)
        cnt += 1
    else:
        rank += cnt
        i.set_rank(rank)
        maxdiem = i.dtb
        cnt = 1
    print(i)
    # if i.dtb==maxdiem:
    #     i.set_rank(rank)
    #     cnt+=1
    # else:
    #     rank+=cnt
    #     i.set_rank(rank)
    #     maxdiem=i.dtb
    #     cnt=1
# print(f"{lst[0]} {rank}")
# for  i in range(1,len(lst)):
#     if(lst[i].dtb != lst[i-1].dtb):
#         rank=i+1
#
#     print(f"{lst[i]} {rank}")
# 3
#  ha Thi kieu     anh
# 7
# 6
# 7
# Pham    THI  HAO
# 6
# 7
# 6