def time_to_num(s):
    h , m = s.split(":")
    return int(h)*60 + int(m)
def num_to_time(res):
    h= res//60
    m = res%60
    return   f"{h} gio {m} phut"
class NET:
    def __init__(self , id, name, in_time, out_time):
        self.id = id
        self.name = name
        self.in_time = time_to_num(in_time)
        self.out_time = time_to_num(out_time)
        self.sum = self.out_time- self.in_time
        self.gio = num_to_time(self.sum)
lst=[]
for t in range(int(input())):
    id=  input()
    name = input()
    in_time = input()
    out_time = input()
    lst.append(NET(id, name, in_time, out_time))
lst = sorted(lst, key= lambda s: (-(s.sum), s.id))
for i in lst:
    print(i.id, i.name, i.gio)