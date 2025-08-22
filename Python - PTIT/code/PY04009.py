for t in range(int(input())):
    arr = input().split()
    x,y = complex(int(arr[0]), int(arr[1])), complex(int(arr[2]), int(arr[3]))
    c= (x+y )*x
    d = (x+y)**2
    a = list(map(int, [c.real, c.imag, d.real, d.imag]))

    print(f"{a[0]} + {a[1]}i, {a[2]} + {a[3]}i")
