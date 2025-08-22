def tich(s):
    res=1
    for i in s:
        res*=int(i)
    return res
for t in range(int(input())):
    n = int(input())
    lst = input().split()
    lst.sort(key=lambda s : (tich(s), int(s)))
    print(*lst)