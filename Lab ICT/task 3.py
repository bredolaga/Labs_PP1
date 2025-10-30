print("Enter a positive integer")
num = int(input())
if num <= 0:
    print ("Enter a valid number")
if num > 10:
    print ("Enter a valid number")
elif num > 0 and num <= 10:
    for i in range (1, 11):
        print (f"{num} * {i} = {num * i}")
