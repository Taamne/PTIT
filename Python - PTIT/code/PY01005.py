s = input()
s= list(s)
cnt=0
for i in range(0, len(s)):
    if(int(s[i]) == 7) or (int(s[i]) == 4):
        cnt+=1
if (cnt==4) or (cnt ==7):
    print("YES")
else:
    print("NO")
