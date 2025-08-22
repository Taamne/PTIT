def  time_to_num(time):
    h,m= time.split(":")
    return  int(h)*60 + int(m)
class Mua:
    def __init__(self, name, total_time, total_rain):
        self.name = name

        self.total_rain = total_rain
        self.total_time = total_time
    def op(self):
        return f"{(self.total_rain / self.total_time)*60:.2f}"
lst=[]
n = int(input())
for t in range(n):
    name = input().strip()
    start = time_to_num(input().strip())

    end = time_to_num(input().strip())
    total_time = end-start

    total_rain = int(input())
    p = Mua(name, total_time, total_rain)
    if(len(lst)==0):
        lst.append(p)
    else:
        ok=False
        for x in lst:
            if x.name == p.name:
                x.total_rain+=total_rain
                x.total_time+=total_time
                ok=True
                break
        if not ok:

            lst.append(p)

cnt=1
for i in lst:
    print(f"T{cnt:02d} {i.name} {i.op()}")
    cnt+=1



