lst = []

while len(lst) < 10:
    lst += list(map(int, input().split()))

res = set(x % 42 for x in lst)

print(len(res))
