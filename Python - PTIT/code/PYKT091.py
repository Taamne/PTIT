from  sys import stdin
try:
    fr=open("VANBAN.in",'r')
except:
    fr=stdin
def tn(s):
    return s==s[::-1]
Map = {}
lst=[]
for line in fr:
    lst+=list(map(str,line.strip().split()))
tmp=0
# for i in lst:
#     print(i)
# print(tn("rotator"))
for i in lst:
    if(tn(i)):
        if(len(i) > tmp):
            tmp=len(i)
        Map[i] = Map.get(i,0)+1
# for i in Map:
#     print(i)
# print(tmp)
for i in Map:
    if(len(i)==tmp):
        print(i,Map[i])

