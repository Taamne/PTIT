for t in range(int(input())):
    n=int(input())
    lst = list(map(int, input().split()))
    maps = {}
    for i in lst:
        maps[i] = maps.get(i,0) +1
    max_count = max( maps.values())
    res = [int(i) for i in maps if maps[i] == max_count]

    if (max_count > n//2):
        print((min(res)))
    else: print("NO")