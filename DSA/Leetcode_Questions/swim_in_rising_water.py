def check(grid, t):
    q = []
    n = len(grid)
    opts = [(1,0),(0,1),(-1,0),(0,-1)]
    
    vis = []
    for i in range(n):
        temp = [False]*n
        vis.append(temp)
    q.append((0,0))
    reached = False
    while len(q)!=0:
        x,y = q.pop()
        vis[x][y] = True
        for dx,dy in opts:
            i = x+dx
            j = y+dy

            if i<0 or j<0 or i>=n or j>=n or grid[i][j]>t or vis[i][j]:
                continue
            
            if i==n-1 and j==n-1:
                reached = True
                break
            
            q.append((i,j))
        
        if reached:
            break
    return reached


grid = [[0,1,2,3,4],[24,23,22,21,5],[12,13,14,15,16],[11,17,18,19,20],[10,9,8,7,6]]


high = float('-inf')
for row in grid:
    high = max(high,max(row))
n = len(grid)
low = grid[n-1][n-1]
ans = grid[n-1][n-1]

while low<=high:
    mid = (low+high)>>1
    if check(grid,mid):
        high = mid-1
        ans = mid

    else:
        low = mid+1

print(ans)
