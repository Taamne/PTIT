def tn(n):
    s=str(n)
    return s == s[::-1]
n,m=map(int,input().split())
matrix=[]
for i in range(n):
    matrix.append(list(map(int, input().split())))
M=0
for i in range(n):
    for j in range(m):
        if( tn(matrix[i][j]) and matrix[i][j]>M):
            M=matrix[i][j]
print(M)
check= False
for i in range(n):
    for j in range(m):
        if( matrix[i][j]==M):
            check=True
            print(f"Vi tri [{i}] [{j}]")
if(not check):
    print("NOT FOUND")
# 6 4
# 23 21 77 10
# 13 13 22 14
# 28 29 28 23
# 29 77 11 19
# 16 26 24 21
# 13 25 77 77

