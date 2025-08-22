n=int(input())
lst=[]
while(len(lst)<n):
    lst+=(list(map(int,input().split())))
lst.sort()
M=lst[-1]
m=lst[0]
check=False
for i in range(1,M+1,1):
    if(i not in lst):
        print(i)
        check=True
if (not check):
    print("Excellent!")


