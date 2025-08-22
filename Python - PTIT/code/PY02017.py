for i in range(int(input())):
    n=int(input())
    lst=list(map(int, input().split()))
    map_lst= {}
    for i in lst:
        map_lst[i]= map_lst.get(i,0)+1
    for i in map_lst:
        if(map_lst[i] % 2 ==1):
            print(i)

# 2
# 7
# 1 2 3 2 3 1 3
# 5
# 1 1 3 3 2