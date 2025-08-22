for t in range(int(input())):
    n=int(input())
    lst=[]
    for i in range(0,n):
        lst+= list(input().split())
    freg={}
    for num in lst:
        freg[num] = freg.get(num,0)+1
    max_count = max(freg.values())
    res = [int(num) for num in freg if freg[num] ==max_count ]

    print(min(res))