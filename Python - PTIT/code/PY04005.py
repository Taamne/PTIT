import math
class Point:
    def __init__(self, x,y):
        self.x =x
        self.y=y
    def TRIANGLE(self,p):
        return math.sqrt(math.pow(self.x - p.x,2) + math.pow(self.y-p.y,2))
for t in range(int(input())):
    line=input().split()
    p1=Point(int(line[0]),int(line[1]))
    p2=Point(int(line[2]),int(line[3]))
    p3=Point(int(line[4]),int(line[5]))
    a=p1.TRIANGLE(p2)
    b=p2.TRIANGLE(p3)
    c=p3.TRIANGLE(p1)
    if(a+b <=c) or(a+c<=b)or(b+c <=a):
        print("INVALID")
    else:
        p=a+b+c
        print(f"{math.ceil(p * 1000) / 1000}")


