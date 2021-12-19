x = str(input())
y = str(input())
temp = False
for i in range(len(x)):
    print(y[:-1])
    y = y[-1] + y[:-1]
    if y == x:
        temp = True
        break

if temp:
    print("Yes")
else:
    print("No")
