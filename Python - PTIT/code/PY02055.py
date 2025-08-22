from math import isqrt


def tn(n):

    s=str(n)
    if(len(s) <2):
        return False
    return s == s[::-1]
def nt(n):
    if(n<2):
        return False
    for i in range(2,isqrt(n)+1):
        if(n%i==0):
            return False
    return True
n,m=map(int,input().split())
matrix=[]
for i in range(n):
    matrix.append(list(map(int, input().split())))
M=-1
for i in range(n):
    for j in range(m):
        if( nt(matrix[i][j]) and matrix[i][j]>M):
            M=matrix[i][j]
if(M==-1):
    print("NOT FOUND")
else:
    print(M)
    for i in range(n):
        for j in range(m):
            if( matrix[i][j]==M):
                print(f"Vi tri [{i}][{j}]")

# 6 4
# 23 21 77 10
# 13 13 22 14
# 28 29 28 23
# 29 77 11 19
# 16 26 24 21
# 13 25 77 77
# 6 4
# 23 21 26 10
# 13 13 22 14
# 28 29 28 23
# 29 19 11 19
# 16 26 24 21
# 13 25 21 29
# Vi tri [2][1
