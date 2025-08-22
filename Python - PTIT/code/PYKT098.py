from xmlrpc.client import MAXINT, MININT

fr = open("DATA.in",'r')
def check_int(s):

    if(not s.isdigit()):
        return True
    x=int(s)
    if(x <=MAXINT and x >=MININT ):
        return False
    return True



lst=[]
inp = fr.readlines()
for line in inp:
    if(line.strip()!=''):

        for i in line.strip().split():
            if(i.strip()!=""):
                if(check_int(i)):
                    lst.append(i)
lst.sort()
for i in lst:
    print(i, end=" ")


