
s = input()
upper=0
lower=0
for x in s:
    if x.islower():
        lower+=1
    elif x.isupper():
        upper+=1
if lower < upper:
    print(s.upper())
else:
    print(s.lower())