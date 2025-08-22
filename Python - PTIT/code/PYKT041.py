lst = []
n = int(input())
cnt=0
for t in range(n):
    lst.append(input())
for i in range(n):
    for j in range(n):
        if(lst[i][j] =='C'):
            for k in range(i+1,n):
                if lst[k][j] =='C':
                    cnt+=1
            for k in range(j + 1,n):
                if lst[i][k] == 'C':
                    cnt += 1
print(cnt)


