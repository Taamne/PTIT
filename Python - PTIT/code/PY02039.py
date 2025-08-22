n = int(input())
matrix=[[]]*n
for i in range(n):
    matrix[i]= [int(i) for i in input().split()]
k = int(input())
tren=0
duoi=0
for i in range(n):
    for j in range(n):
        if i < j:
            tren+=matrix[i][j]
        elif j < i:
            duoi+=matrix[i][j]
if abs(tren - duoi) <= k:
    print("YES")
else: print("NO")

print(abs(tren - duoi))
