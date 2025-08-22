n=int(input())
grap=[[]for i in range(n+1)]

for i in range(n-1):
    u,v=map(int, input().split())
    grap[u].append(v)
    grap[v].append(u)
cnt1=0
check=True
for i in grap:

    if(len(i)==n-1):
        cnt1+=1
    elif len(i)>1:
        check=False
        break
if(check):
    print("Yes")
else:
    print("No")
