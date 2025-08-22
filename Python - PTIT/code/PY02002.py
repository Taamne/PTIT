def fibo():
    F=[0,1,1]

    for i in range(3,94,1):
        F.append(F[i-1]+F[i-2])
    return F
F=fibo()
for t in range(int(input())):
    a,b= map(int, input().split())
    for i in range(a,b+1):
        print(F[i],end=' ')
    print()

