n=int(input())
lst = list(map(float, input().split()))
min_list= min(lst)
max_list= max(lst)
res=0.0
cnt=0
for i in lst:
    if i!= min_list and i != max_list:
        res+=i
        cnt+=1
print("{:.2f}".format(res/cnt))

