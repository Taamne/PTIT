n=int(input())
lst=list(sorted(list(map(int, input().split()))))
s1= lst[0]*lst[1]*lst[2]
s2=lst[0]*lst[1]
s4= lst[-1]*lst[-2]*lst[-3]
s3=lst[-1]*lst[-2]
s5=lst[-1]*lst[0]*lst[1]

print(max(s1,s2,s3,s4,s5))
