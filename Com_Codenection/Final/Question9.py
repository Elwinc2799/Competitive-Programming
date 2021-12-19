N = int(input())
stairs = [int(x) for x in input().split()]
arr_stairs = []

for i in range(N):
    arr_stairs.append(0)

possible = True
swap = True

while swap:
    swap = False
    for i in range(N-1):
        if stairs[i] - stairs[i+1] >= 1:
            swap = True
            stairs[i] = stairs[i] - 1
            arr_stairs[i] = arr_stairs[i] - 1
            if arr_stairs[i] == -2:
                possible = False
                swap = False
                break

if possible:
    print("Yes")
else:
    print("No")
