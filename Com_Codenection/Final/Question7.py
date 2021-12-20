S = str(input())

index = int(S) // 2019
count = 0

# 1817181712114
for i in range(len(S)-3):
    for j in range(i+4, len(S)+1):
        if int(S[i:j]) > 2019:
            if int(S[i:j]) % 2019 == 0:
                count = count + 1
print(count)
