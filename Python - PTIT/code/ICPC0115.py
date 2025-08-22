kr=[1]*10
for i in range(2,10):
    kr[i] = i* kr[i-1]
for t in range(int(input())):
    num = input()
    s=sum(kr[int(i)] for i in num)
    print("Yes" if(int(num) ==s) else "No")