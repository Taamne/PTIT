s = (input())
cnt=0
res =[]
for i in range(len(s)-1,-1,-1):
    if cnt ==3:
        res.append(",")
        cnt=1
    else:
        cnt+=1
    res.append(s[i])
res.reverse()
for i in  res:
    print(i,end="")