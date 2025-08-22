from sys import stdin

try:
    fr=open("CONTACT.in",'r')
except:
    fr=stdin
lines=list(set([line.strip().lower() for line in fr if line.strip() !='']))
lines.sort()
for line in lines:
    print(line)