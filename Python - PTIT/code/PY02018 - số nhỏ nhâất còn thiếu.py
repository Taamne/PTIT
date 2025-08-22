n = int(input())
a=list(map(int, input().split()))
b= list(int(i) for i in range(1, 30005))
for i in b:
    if i not in a:
        print(i)
        break