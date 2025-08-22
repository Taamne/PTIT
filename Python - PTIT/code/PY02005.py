n=int(input())
lst = list(map(int, input().split()))
cnt=0
for i in range(0,n-1):
    for j in range(i,n):
        if lst[i] > lst[j]:
            cnt+=1
print(cnt)