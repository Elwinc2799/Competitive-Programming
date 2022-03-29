n, x, y = [int(x) for x in input().split()]

a = [int(x) for x in input().split()]
b = [int(x) for x in input().split()]

diff = []
for i in range(n):
    diff.append((abs(a[i] - b[i]), i))


print(diff)
diff.sort(reverse=True)

print(diff)
ans = 0

for i in range(n):
    idx = diff[i][1]
    if x == 0:
        ans += b[idx]
        continue
    if y == 0: 
        ans += a[idx]
        continue

    if a[idx] > b[idx]:
        x -= 1
        ans += a[idx]
    else:
        y -= 1
        ans += b[idx]

print (ans)