res_map = {}
lst=[]
for  i in range(int(input())):
    lst.append(input())
curren_topic = ""
for i in range(0,len(lst)):
    line = lst[i]
    if(curren_topic==""):
        res_map[line]=0
        curren_topic=line
    else:
        if(line.strip()==""):
            curren_topic=""
        else:
            res_map[curren_topic]+=1
for topic in res_map:
    print(f"{topic}: {res_map[topic]}")
# 9
# Home / accommodation
# What kind of housing / accommodation do you live in?
# Who do you live with?
# How long have you lived there?
#
# Study
# Describe your education
# What is your area of specialization?
# Why did you choose to study that major?


