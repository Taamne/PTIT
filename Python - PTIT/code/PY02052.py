n=int(input())
matrix=[]
for i in range(n):
    # matrix.append(list(map(int, input().split())))
    matrix[i]=[int(i) for i in input().split()]
sumt=0

sumd=0
k=int(input())
for i in range(n):
    for j in range(n):
        if(j>i):
            sumt+=matrix[i][j]
        elif j<i:
            sumd+=matrix[i][j]
if(abs(sumt - sumd) <=k):
    print("YES")
else:print("NO")
print(abs(sumt-sumd))


# 5
# 2 8 10 6 7
# 6 3 2 6 9
# 10 2 6 2 8
# 9 9 7 9 8
# 9 6 5 6 9
# 5