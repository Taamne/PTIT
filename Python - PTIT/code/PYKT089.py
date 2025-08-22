n=int(input())
# lst=list(int(i) for i in input().split())
lst=[]
while(len(lst)<n):
    lst+=list(map(int, input().split()))

lstc=[]
lstl=[]
for i in lst:
    if(i % 2 ==0):
        lstc.append(i)
    else: lstl.append(i)
lstc=sorted(lstc)
lstl=sorted(lstl)
i=0
j=len(lstl)-1

for num in lst:
    if(num%2==0):
        print(lstc[i], end=" ")
        i+=1
    else:
        print(lstl[j], end=" ")
        j-=1
# 11
# 1 2 3 4 5 6 7 7 9 6 0