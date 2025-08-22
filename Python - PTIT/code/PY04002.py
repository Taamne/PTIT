class Rectangle:
    def __init__(self, a, b, c):
        self.a =a
        self.b = b
        self.c =c
    def perimeter(self):
        return (self.a + self.b) * 2

    def area(self):
        return self.a * self.b
    def color(self):
        return self.c.lower().title()

if __name__ == '__main__':
    arr = input().split()
    if(arr[0].isalnum() >0 and arr[1].isalnum() >0 ):

        r = Rectangle(int(arr[0]), int(arr[1]), str(arr[2]))
        print('{} {} {}'.format(r.perimeter(), r.area(), r.color()))
    else: print("INVALID")