from itertools import combinations

P = 0

x = str(input()).split(' ')
coor = []
for i in range(int(x[0])):
    coor.append(input())

comb = list(combinations(coor, 2))

for i in comb:
    first = i[0].split(' ')
    second = i[1].split(' ')
    
    result = 0
    for j in range(int(x[1])):
        result += (int(first[j])-int(second[j]))**2
    
    result = result**0.5
    
    test = int(result)
    
    if result - test > 0:
        pass
    else:
        P += 1

print(P)