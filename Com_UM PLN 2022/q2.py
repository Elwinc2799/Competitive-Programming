# get n input
from collections import deque

n = int(input())


def bfs(grid, check, i, j, variant):
    queue = deque([(i, j)])
    cluster_size = 0
    # loop through queue
    while queue:
        
        i, j = queue.popleft()
        # check if i,j is valid
        if 0 <= i < len(grid) and 0 <= j < len(grid[0]) and grid[i][j] == variant and check[i][j] == False:
            check[i][j] = True
            cluster_size += 1
            queue.extend([(i-1, j), (i+1, j), (i, j-1), (i, j+1)])

    return cluster_size


for i in range(n):
    row = int(input())
    grid = []

    # get n x n row and rol

    for j in range(row):
        grid.append(list(map(int, input().split())))

    # find largest cluster
    largest_cluster = 0
    res = 0
    # initialize 2D array for check
    check = [[False for i in range(row)] for j in range(row)]

    for i in range(row):
        for j in range(row):
            if grid[i][j] == 1 or grid[i][j] == 2 and check[i][j] == False:
                # found cluster
                # if cluster size > current cluster size
                cluster_size = bfs(grid, check, i, j, grid[i][j])
                if cluster_size > largest_cluster or (cluster_size == largest_cluster and grid[i][j] == 2):
                    largest_cluster = cluster_size
                    res = grid[i][j]
    
    if res == 1:
        print('MOH should focus on Covid-19')
    else:
        print('MOH should focus on Omicron')
