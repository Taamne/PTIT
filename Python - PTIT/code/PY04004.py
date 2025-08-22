import math

class PS:
    def __init__(self ,t,m):
        self.t = t
        self.m =m
    def rutgon(self):
        uc =math.gcd(self.t,self.m)
        self.t = self.t//uc
        self.m = self.m // uc
        return  f"{self.t}/{self.m}"
    def sumPS(self,p):
        bc =math.lcm(self.m,p.m)
        x1= bc//self.m
        x2 = bc//p.m
        ts= (self.t * x1) + (p.t * x2)
        ms =bc
        p = PS(ts,ms)
        return p.rutgon()

arr= input().split()
p1 = PS(int(arr[0]),int(arr[1]))
p2 = PS(int(arr[2]),int(arr[3]))
print(p1.sumPS(p2))
