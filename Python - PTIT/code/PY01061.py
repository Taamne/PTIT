import math

def is_prime(n):
    if n < 2:
        return False
    for i in range(2, math.isqrt(n) + 1):
        if n % i == 0:
            return False
    return True
for t in range(int(input())):
    s= input()
    if is_prime(int(s[:3])) and is_prime(int(s[len(s)-3:])):
        print("YES")
    else: print("NO")
