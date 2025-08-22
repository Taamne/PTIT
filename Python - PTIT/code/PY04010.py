
# def chuanhoaten(s)

class TS:
    def __init__(self, name, birth, m1, m2, m3):
        self.name = name
        self.birth = birth
        self.m1=m1
        self.m2=m2
        self.m3 = m3
        self.res = m1+m2+m3
    def op(self):
        return f"{self.name} {self.birth} {self.res:.1f}"
name = input()
birth = input()
m1 = float(input())
m2 = float(input())
m3 = float(input())
ts = TS(name, birth, m1,m2,m3)
print(ts.op())