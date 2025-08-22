for t in range(int(input())):
    n=int(input())
    lst = input().split()
    lst.sort(key= lambda s : (sum(int(i) for i in s) , int(s)))
    print(*lst)