while True:
    print("Input Exit to quit")
    
    num1 = input("First number: ").strip()
    if num1.lower() == "Exit":
        break
    try:
        x = int(num1)
    except ValueError:
        print("Incorrect number")
        
    num2 = input("Second number: ").strip()
    if num2.lower() == "Exit":
        break
    try:
        x = int(num2)
    except ValueError:
        print("Incorrect number")
        
    operation = input("Input operation")
    num1 = int(num1)
    num2 = int(num2)
    if operation.lower() == "exit":
        break
    elif operation == "+" or operation.lower() == "sum":
        print(f"sum : {num1} + {num2} = {num1 + num2}")
    elif operation == "-" or operation.lower() == "subtraction":
        print(f"sum : {num1} - {num2} = {num1 - num2}")
    elif operation == "*" or operation.lower() == "multiplication":
        print(f"sum : {num1} * {num2} = {num1 * num2}")
    elif operation == "/" or operation.lower() == "divide":
        if num2 == 0:
            print ("You vant divide by 0")
            continue
        print(f"sum : {num1} / {num2} = {num1 / num2}")
    else:
        print("Invalid operation please try again")
