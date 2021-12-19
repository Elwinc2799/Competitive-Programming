s = str(input())

count = 0
j = -1

for i in range(len(s)//2):
    if s[i] != s[j]:
        count += 1
    j -= 1

print(count)