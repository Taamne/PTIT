while True:
        lst=[]
        n=int(input())
        if(n!=0):
            for i in range(n):
                lst.append(int(input()))
        else:
            break
        min_lst = min(lst)
        max_lst = max(lst)
        if (min_lst == max_lst):
            print("BANG NHAU")
        else:
            print(f"{min_lst} {max_lst}")
