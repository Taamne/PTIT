import math

def is_prime(n):
    if n < 2:
        return False
    for i in range(2, math.isqrt(n) + 1):
        if n % i == 0:
            return False
    return True

def valid_position_prime(s):
    prime_digits = {'2', '3', '5', '7'}
    for i in range(1, len(s)+1):  # i từ 1 đến len(s)
        digit = s[i-1]
        if is_prime(i):
            if digit not in prime_digits:
                return False
        else:
            if digit in prime_digits:
                return False
    return True

# Xử lý input
t = int(input())
for _ in range(t):
    s = input().strip()
    if valid_position_prime(s):
        print("YES")
    else:
        print("NO")
