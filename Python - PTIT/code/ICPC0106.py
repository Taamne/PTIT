# def changeto10(s):
#     res=0
#     j=0
#     for i in s[-1:]:
#        res+= int(i) * pow(2,j)
#     return res
bit =['0','1','2','3','4','5','6','7','8','9','A','B','C', 'D','E','F']
for t in range(int(input())):
    n = int(input())
    res = ''

    s=int(input(),2)
    while s>0:
        res+=bit[s%n]
        s//=n
    print(res[::-1])
