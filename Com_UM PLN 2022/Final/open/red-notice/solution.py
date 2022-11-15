t = int(input())

for i in range(t):

    n = int(input())
    h = int(input())

    a = str(input()).split()

    a = [int(x) for x in a]

    hi = max(a)
    lo = 1

    while lo < hi:
        mid = lo + (hi - lo) // 2

        timeTaken = 0

        for i in range(n):
            timeTaken += (a[i]-1) // mid + 1

        if timeTaken <= h:
            hi = mid
        else:
            lo = mid + 1
    
    print(lo)