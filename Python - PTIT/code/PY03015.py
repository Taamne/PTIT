from collections import  deque
def count_bfs(n,grap, skip):
    visited=[False]*(n+1)
    cnt=0
    for i in range(1, n+1):
        if(i!=skip and not visited[i]):
            cnt += 1

            queue = deque([i])
            visited[i]=True
            while queue:
                u=queue.popleft()
                for j in grap[u]:
                    if(not visited[j] and j != skip):
                        visited[j]=True
                        queue.append(j)
    return cnt
# 2
# 5 5
# 1 2
# 1 3
# 2 3
# 3 4
# 3 5
# 5 7
# 1 2
# 1 3
# 2 3
# 2 5
# 3 4
# 3 5
# 4 5


for t in range(int(input())):
    n,m=map(int, input().split())
    grap=[[]for i in range(n+1)]
    for i in range(m):
        u,v= map(int, input().split())
        grap[u].append(v)
        grap[v].append(u)
    M=0
    node=0
    old = count_bfs(n, grap, 0)
    for i in range(1,n+1):
        new=count_bfs(n,grap,i)
        res=new-old
        if(res>M ):
            node=i
            M=res
        elif(res==m and node>i):
            node=i
    print(node if(M>0) else 0)



