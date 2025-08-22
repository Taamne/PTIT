n= int(input())
lst=list(map(int,(input().split())))
ok = False
cnt=0
for i in range(0,len(lst)-1):
    if lst[i] != lst[i+1]:
        cnt+=1
print(cnt)

