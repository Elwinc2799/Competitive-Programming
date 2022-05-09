arr = []

for _ in range(6):
    a = int(input())
    arr.append(a)
    
arr.sort(reverse= True)

for i in range(6):
    print(arr[i], end="")