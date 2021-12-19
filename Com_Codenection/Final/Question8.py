text = str(input())

yes = False

if text[-1] == text[-2]:
    if text[-3] == text[-4]:
        yes = True

if yes:
    print("Yes")
else:
    print("No")
