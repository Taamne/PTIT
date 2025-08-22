import math

class PS:
    def __init__(self ,t,m):
        self.t = t
        self.m =m
    def rutgon(self):
        uc =math.gcd(self.t,self.m)
        self.t = self.t//uc
        self.m = self.m // uc
        return f"{self.t}/{self.m}"
t,m = input().split()
p = PS(int(t),int(m))
print(p.rutgon())
