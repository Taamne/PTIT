# n,m=map(int, input().split())
# a=list(map(int, input().split()))
# b = list(map(int, input().split()))
# seena=set()
# seenb=set()
# A=[]
# B=[]
# for i in a:
#     if( i not in seena):
#         A.append(i)
#         seena.add(i)
# for i in b:
#     if( i not in seenb):
#         B.append(i)
#         seenb.add(i)
# giao=[]
# ab=[]
# ba=[]
# for i in a:
#     if(i in b):
#         giao.append(i)
#     if( i not in b):
#         ab.append(i)
# for i in b:
#     if i not in a:
#         ba.append(i)
# for i in giao:
#     print(i, end=" ")
# print()
# for i in ab :
#     print(i, end= " ")
# print()
# for i in ba :
#     print(i, end=" ")
# print()
#
#
#
# 5 6
# 1 2 3 4 5
# 3 4 5 6 7 8
n,m=map(int, input().split())
a=set(map(int, input().split()))
b = set(map(int, input().split()))
giao = sorted(a & b)
ab = sorted(a-b)
ba=sorted(b-a)
for i in giao:
    print(i, end=" ")
print()
for i in ab :
    print(i, end= " ")
print()
for i in ba :
    print(i, end=" ")
print()
