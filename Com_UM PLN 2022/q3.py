n, x, y = [int(x) for x in input().split()]

listW = [int(x) for x in input().split()]

listU = [int(x) for x in input().split()]

sum = 0

listcom = zip(listW, listU)
listcomsorted = sorted(listcom, reverse=True)

listW = [x for x, y in listcomsorted]
listU = [y for x, y in listcomsorted]


for i in range(n):
    for j in range(n):
        if (i == j):
            if(listW[i] > listU[j] and x>0):
                sum += listW[i]
                x -= 1
            elif(listW[i] < listU[j] and y>0):
                sum += listU[i]
                y -= 1
            elif(listW[i] == listU[j]):
                sum += listW[i]
            elif(x>0):
                sum += listW[i]
                x -= 1
            elif(y>0):
                sum += listU[i]
                y -= 1
            else:
                break

print(sum)