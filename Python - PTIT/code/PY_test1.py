from datetime import datetime
day1="16/9/2004"
day2="10/6/2004"
day = datetime.strptime(day1,"%d/%m/%Y")- datetime.strptime(day2,"%d/%m/%Y")
print(day.days)