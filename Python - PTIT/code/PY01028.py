s = input()
s=s.strip()

str =[]
import re
s=re.sub(r"\s+"," ",s)
str = s.split(" ")
for i in str:
    print(i)
