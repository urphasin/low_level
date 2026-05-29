s = input()
u = 0
l = 0

for letter in s:
    if letter.islower():
        l += 1
    elif letter.isupper():
        u += 1

if u == l or l > u:
    print(s.lower())

if u > l:
    print(s.upper())

