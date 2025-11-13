def factorial (number):
    result = 1
    for i in range(1, number + 1):
        result *= i
    return result

def main ():
    while True:
        print ("Print quit to close program")
        number = input("Input number to calculate factorial: ").lower().strip()
        if number == "quit":
            break
        try:
            x = int(number)
        except ValueError:
            print("Incorrect number")
            continue
        number = int(number)
        print(f"Factorial is {factorial(number)}")
main()
