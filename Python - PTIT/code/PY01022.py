s=input()
cnt=0
while(len(s)>1):
    s=str(sum(int(i) for i in s))
    cnt+=1
print(cnt)