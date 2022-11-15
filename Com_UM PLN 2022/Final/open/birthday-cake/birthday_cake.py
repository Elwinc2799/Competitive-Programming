a, b, c = input().split()


# x = 4, 6, 2
def dfs(x, y, n):
    print(f"x= {x},y = {y}, n = {n}")
    if n == 1:
        print(f"exiting dfs {max(x,y)/min(x,y)}")
        return max(x, y) / min(x, y)
    # x = 1, y = 4 return 4
    # max (length, width) / min(length, width)
    # length / width || width / length
    ans = 9999999999

    # x = length, n = number of cakes, y = width
    # smaller cake average
    mx = x / n # average length
    my = y / n

    print(f"mx = {mx}, my = {my}")
    # for loop 1, 2, 1
    for i in range(1, n, 1):
        # horizontal_cut = -> Maximum ratio after each horizontal cut
        # cut once for horizontal?
        # (average * 2, y, 2), (x - average * 2, y, 3)
        # maximum ratio wor?
        print(f"i = {i}, n = {n}")
        horizontal_cut = max(dfs(mx * i, y, i), dfs(x - mx * i, y, n - i)) # n still remain 4 -> 3, 4, 3  # 1
        vertical_cut = max(dfs(x, my * i, i), dfs(x, y - my * i, n - i)) # 2

        print(f"horizontal_cut = {horizontal_cut}, vertical_cut = {vertical_cut}")

        ans = min(ans, min(horizontal_cut, vertical_cut))
        print(f"ans {ans}")

    return ans


print(f"{dfs(int(a), int(b), int(c))}")
