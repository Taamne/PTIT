n,m=map(int, input().split())
matrix=[]
for i in range(n):
    matrix.append(list(map(int, input().split())))
M=max(max(row) for row in matrix)
mi = min(min(row) for row in matrix)
x=M-mi
check=False
res=[]
# print(matrix)
for i in range(n):
    for j in range(m):
        if(matrix[i][j] == x):
            check=True
            res.append(f"Vi tri [{i}][{j}]")
if(check):
    print(x)
    for i in res:
        print(i)
else:print("NOT FOUND")
# 6 4
# 23 21 77 10
# 13 13 22 14
# 28 67 28 23
# 29 77 11 67
# 16 51 24 21
# 13 25 77 77