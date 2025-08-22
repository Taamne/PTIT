n = int(input())
print('A -> C')

for i in range(1,n):
    print('A -> B')
    for j in range (1,i+1):
        print('C -> A')
    print('B -> C')
    for j in range (1,i+1):
        print('A -> C')
