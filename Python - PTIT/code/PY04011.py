# lst=[]
# def check(a,b,c):
#     if (b == '<'):
#         if not lst:
#             lst.append(a)
#             lst.append(c)
#         else:
#             if (a in lst) and (c in lst):
#                 if lst.index(a) > lst.index(c):
#                     return False
#             elif (a in lst) and (c not in lst):
#                     lst.insert(lst.index(a)+1, c)
#             elif (a not in lst) and (c  in lst):
#                     lst.insert(lst.index(c)-1, a)
#             else:
#                 lst.append(a)
#                 lst.append(c)
#     elif (b == '>'):
#         if not lst:
#             lst.append(c)
#             lst.append(a)
#         else:
#             if (a in lst) and (c in lst):
#                 if lst.index(a) < lst.index(c):
#                     return False
#             elif (a in lst) and (c not in lst):
#                     lst.insert(lst.index(a)-1, c)
#             elif (a not in lst) and (c  in lst):
#                     lst.insert(lst.index(c)+1, a)
#             else:
#                 lst.append(c)
#                 lst.append(a)
#
#     return True
# ok=True
# for t in range(int(input())):
#     a,b,c=input().split()
#     if not check(a,b,c):
#         ok=False
#         break
# if ok:
#     print("possible")
#
# else:
#     print("impossible")
# for i in lst:
#     print(i)
from collections import defaultdict, deque

adj = defaultdict(list)
in_deg = defaultdict(int)
nodes = set()

t = int(input())
for _ in range(t):
    a, op, b = input().split()
    nodes.update([a, b])
    if op == '<':
        adj[a].append(b)
        in_deg[b] += 1
        in_deg[a] += 0  # đảm bảo có in_deg[a]
    elif op == '>':
        adj[b].append(a)
        in_deg[a] += 1
        in_deg[b] += 0

# Topo sort bằng BFS
q = deque([node for node in nodes if in_deg[node] == 0])
res = []

while q:
    u = q.popleft()
    res.append(u)
    for v in adj[u]:
        in_deg[v] -= 1
        if in_deg[v] == 0:
            q.append(v)

if len(res) == len(nodes):
    print("possible")
else:
    print("impossible")

