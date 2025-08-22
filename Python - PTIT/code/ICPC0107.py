def min_num(p, q, x):
    return x.replace(q, p)  # Thay q thành p (nhỏ hơn → nhỏ nhất)

def max_num(p, q, x):
    return x.replace(p, q)  # Thay p thành q (nhỏ hơn → lớn nhất)

for t in range(int(input())):
    p, q = input().split()

    ip = input().split()
    if(len(ip) ==1):
        x1=ip[0]
        x2=input()
    else:
        x1,x2=ip
    if q > p:
        print(int(min_num(p, q, x1)) + int(min_num(p, q, x2)), end=' ')
        print(int(max_num(p, q, x1)) + int(max_num(p, q, x2)), end=' ')
    else:
        print(int(min_num(q, p, x1)) + int(min_num(q, p, x2)), end=' ')
        print(int(max_num(q, p, x1)) + int(max_num(q, p, x2)), end=' ')
