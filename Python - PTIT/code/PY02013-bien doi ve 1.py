while True:
    n = int(input())
    if n==0:
        break
    else:
        sets = set()
        sets.add(n)
        while n!=1:
            if n %2==0:
                n=n//2
            else:
                n=n*3 +1
            sets.add(n)
        print(len(sets))

