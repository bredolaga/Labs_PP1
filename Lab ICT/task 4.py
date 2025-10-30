integer = []
for i in range(1, 51):
    integer.append(i)

filtered = []
for x in integer:
    if x % 3 == 0 and x % 5 == 0:
        filtered.append(x)

print(integer)
print(filtered)
