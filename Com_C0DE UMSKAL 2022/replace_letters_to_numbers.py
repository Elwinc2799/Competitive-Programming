a = list(str(input()))

ans = []

if not a:
    print('')

for i in a:
    i = i.upper()
    if(i == "A" or i == "B" or i == "C"):
        ans.append(2)
    elif(i == "D" or i == "E" or i == "F"):
        ans.append(3)
    elif(i == "G" or i == "H" or i == "I"):
        ans.append(4)
    elif(i == "J" or i == "K" or i == "L"):
        ans.append(5)
    elif(i == "M" or i == "N" or i == "O"):
        ans.append(6)
    elif(i == "P" or i == "Q" or i == "R" or i == "S"):
        ans.append(7)
    elif(i == "T" or i == "U" or i == "V"):
        ans.append(8)
    elif(i == "W" or i == "X" or i == "Y" or i == "Z"):
        ans.append(9)
    else:
        ans.append(i)

for i in ans:
    print(i, end="")