n = int(input())

arr = []

count = n

for i in range(n):
    arr.append(int(input()))

res = len(arr) * [1]   
for i in range(1, len(arr)):  # from left to right
    if arr[i] > arr[i-1]:
        res[i] = res[i-1] + 1
for i in range(len(arr)-1, 0, -1):  # from right to left
    if arr[i-1] > arr[i]:
        res[i-1] = max(res[i-1], res[i]+1)

print(sum(res))