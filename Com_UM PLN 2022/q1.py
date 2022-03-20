import math

n = int(input())

# number reconstruction
for i in range(n):
    S = str(input())

    intNum = int(S)
    intRemove = int(S[:-1])

    if intNum % 9 == 0:
        ans1 = intNum + (intNum / 9) - 1
        ans2 = intNum + (intNum / 9)
        print(int(ans1), " ", int(ans2))
    elif (intNum - 1) % 9 == 0:
        print(int(intNum + (intNum - 1) / 9))
    else:
        print(int(intNum + math.floor(intNum/9)))
