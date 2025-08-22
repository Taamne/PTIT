import re
lines=[]
while True:
    try:
        lines.append(input().strip())
    except EOFError:
        break
for line in lines:
    line = re.sub(r'\s+',' ', line.strip()).lower().capitalize()

    if (j in line for j in '.?!'):
        res=re.findall(r'[.!?]',line)
        lst= re.split(r'[.!?]',line)
        for i in range(len(lst)):
            if lst[i].strip()=='':
                continue
            print(re.sub(r'\s+',' ',lst[i]).lower().capitalize().strip(),end='')
            if i >= len(res):
                print('.')
            else:
                print(res[i])
    else:
        print(line.strip() +'.')

# Chuong trinh Dao Tao CLC nganh CNTT duoc Thiet     Ke theo chuan quoc te.
# co 03 chuyen nganh la: Cong  nghe phan mem. tri tue nhan tao va An toan thong tin
# muc tieu cua chuong trinh la trang bi cho sinh vien cac ky nang nghe nghiep
# moi    CAC BAN danG ky     thaM giA !