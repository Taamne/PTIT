fr1=open("DATA1.in",'r')
fr2= open("DATA2.in",'r')
lines1=set()
lines2=set()
for line in fr1:
    if(line.strip()!=''):
        lines1.update(line.strip().lower().split())
for line in fr2:
    if(line.strip()!=''):
        lines2.update(line.strip().lower().split())
ab=sorted(lines1-lines2)
ba= sorted(lines2- lines1)
for i in ab:
    print(i, end=" ")
print()
for i in ba:
    print(i, end=" ")
