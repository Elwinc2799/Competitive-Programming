def gcd(a, b):
    if (b == 0):
        return a
    return gcd(b, a % b)


def lcm(a, b):
    return (a / gcd(a, b)) * b

ls = str(input()).split()

ls = [float(i) for i in ls]

print(int(lcm(ls[0],ls[1])))