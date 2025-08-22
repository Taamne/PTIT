for t in range(int(input())):
    n=int(input())
    a = []
    b = []
    for i in range(n):

        x,m=map(float, input().split())
        a.append(x)
        b.append(m)
    cnt=1
    M=0
    # print(a)
    # print(b)
    dp=[1]*n
    for i in range(n):
        for j in range(i):

            if(a[j]<a[i] and b[j]>b[i]):
                dp[i]=max(dp[i],dp[j]+1)

    print(max(dp))

# 3
# 2
# 1.0 1.0
# 1.5 0.0
# 3
# 1.0 1.0
# 1.0 1.0
# 1.0 1.0
# 6
# 1.5 9.0
# 2.0 2.0
# 2.5 6.0
# 3.0 5.0
# 4.0 2.0
# 10.0 5.5