import math


t = int(input())

while t > 0:
    t -= 1

    n = int(input())
    h = int(input())

    a = [int(x) for x in input().split()]

    lo = 1
    hi = 0

    for n in a:
        hi = max(hi, n)

 # log n
    while lo < hi:
        mid = int(lo + (hi - lo) / 2)

        timeTaken = 0

        for n in a:
            # 4 / 2 -> 2
            # 5 / 2 -> 3
            timeTaken += math.ceil(n/mid)
            print(f"{timeTaken} += {n -1 } / {mid} +1")

        print(f"timeTaken = {timeTaken}")
        if timeTaken <= h:
            hi = mid
        else: # timeTaken > h
            lo = mid + 1
        print(f"high = {hi}, low = {lo}")

    print(f"result = {lo}")

