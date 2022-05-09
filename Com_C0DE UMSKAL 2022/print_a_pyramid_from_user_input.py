s = str(input())

for i in range(len(s)):
    second_half = s[0:i][::-1]
    print((" " * (len(s) - i-1)) + s[0:i+1] + second_half)