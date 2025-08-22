lst=[]
class stu:
    def __init__(self, n,a ,s) -> None:
        self.name = n
        self.ac = a
        self.submit = s
for t in range(int(input())):
    name = input()
    ac, submit = input().split()
    lst.append(stu(name, int(ac), int(submit)))
lst= sorted(lst, key= lambda x : (-int(x.ac), int(x.submit), x.name))
for i in lst:
        print(i.name, i.ac, i.submit)