import math
for t in range(int(input())):
    a=list(map(int, input().split()))
    b = list(map(int, input().split()))
    d=0
    ab=0
    for i in range(len(a)):
        d+=pow(a[i]-b[i],2)
        ab+=a[i]*b[i]
    d=math.sqrt(d)
    print(f"{d:.2f} {ab}")
