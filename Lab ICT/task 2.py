from random import choice

ToDoList = []

while True:
    print("\nTo-Do List Manager")
    print("1 - Add a new to-do item")
    print("2 - View all to-do items")
    print("3 - Remove a to-do item")
    print("q - Quit")

    choice  = input("Enter your choice: ").strip().lower()
    if choice == "1":
        item = input("Enter your to do item:").strip()
        if item:
            ToDoList.append(item)
            print("'{item}' has been added")
        else:
            print("Item can't be empty")
    elif choice == "2":
        if not ToDoList:
            print ("it's empty")
        else:
            for i, task in enumerate(ToDoList, start=1):
                print(f"{i}. {task}")
    elif choice == "3":
        if not ToDoList:
            print("The list is empty.")
        else:
            try:
                num = int(input("Enter the number of the item to delete: "))
                if 1 <= num <= len(ToDoList):
                    removed = ToDoList.pop(num - 1)
                    print(f"'{removed}' has been removed.")
                else:
                    print("Invalid number. Try again.")
            except ValueError:
                print("Please enter a valid number.")
    elif choice == "q":
        break
    else:
        print("Invalid input! Please enter 1, 2, 3, or q.")
