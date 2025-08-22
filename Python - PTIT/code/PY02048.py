n,k=map(int,input().split())
lst= list(sorted(list(map(int, input().split()))))
cnt=1
for i in range(1,len(lst),1):
    if(lst[i]-lst[i-1]!=k):

        cnt+=1

print(cnt)


# 7 1
# 2 6 1 7 3 4 9
# 1 2 3 4 6 7 9
