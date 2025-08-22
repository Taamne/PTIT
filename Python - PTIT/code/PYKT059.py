from collections import deque
def bfs(n,i,v,grap):
    visited=[False]*(n+1)
    queue=deque([i])
    visited[i]=True
    while queue:
        u=queue.popleft()
        if(u==v):
            return True
        for j in grap[u]:
            if(not visited[j] and j!=u):
                visited[j]=True
                queue.append(j)
    return False

n,m,v= map(int, input().split())
grap=[[]for i in range(n+1)]
for i in range(m):
    x,y=map(int , input().split())
    grap[x].append(y)
    grap[y].append(x)
check=False
for i in range(1,n+1):
    if(i!=v and not bfs(n,i,v,grap)):
        check=True
        print(i)
if(not check):
    print(0)
# 6 4 2
# 1 3
# 2 3
# 1 2
# 4 5
