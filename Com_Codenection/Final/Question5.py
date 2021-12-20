N = int(input())
T = str(input())
index = 0
if "00" in T:
    print("0")
elif "010" in T:
    print("0")
elif "111" in T:
    print("0")
elif T == "1":
    print(10**10*2)
elif T == "0":
    print(10**10)
elif T == "01" or T == "011":
    print(10**10 - 1)
elif T == "11" or T == "110":
    print(10**10)
elif T == "10":
    print(10**10)
elif T == "101":
    print(10**10-1)
else:
    ans = 0
    if N >= 4:
        if (T[0:3] == "101"):
            ans = 1 + T.count("110")
        elif (T[0:3] == "110"):
            ans = T.count("110")
        elif(T[0:3] == "011"):
            ans = 2 + T.count("110")
    print(10**10 - ans)
