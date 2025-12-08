nim = input("Masukkan NIM: ")

digit = [int(c) for c in nim]

total = 0
for d in digit:
    total += d

max = digit[0]
for d in digit:
    if d > max:
        max = d

minim = digit[0]
for d in digit:
    if d < minim:
        minim = d

rata = total / len(digit)

rev = []
for i in range(len(digit)-1, -1, -1):
    rev.append(digit[i])

print("digit    ", digit)
print("total    ", total)
print("max      ", max)
print("min      ", minim)
print("rata-rata", rata)
print("reverse  ", rev)