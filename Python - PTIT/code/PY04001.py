lst =[]
import math
from decimal import Decimal
class Point:
    def __init__(self, x,y):
        self.x = x
        self.y=y

    def kc(self, a):
        dis = math.sqrt(pow(self.x - a.x,2) + pow(self.y - a.y,2))
        return f"{dis:.4f}"
for t in range(int(input())):
    arr= input().split()
    p1 = Point(Decimal(arr[0]), Decimal(arr[1]))
    p2 = Point(Decimal(arr[2]), Decimal(arr[3]))
    print(p1.kc(p2))

