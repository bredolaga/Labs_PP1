def add_task(tasks, name, description):
    tasks[name] = description
    print ("Task added")



def main():
    tasks = {}

    while True:
        print("Input action")
        print("1.Add")
        print("2.View")
        print("3.Delete")
        print("4.Quit")

        action = input().strip().lower()

        if action == "add" or action == "1":
            name = input("Input task name: ")
            description = input("Input task description: ")
            add_task(tasks, name, description)

        elif action == "view" or action == "2":
            if not tasks:
                print("No tasks")
            else:
                i = 0
                for name, description in tasks.items():
                    i += 1
                    print(f"{i}. {name} - {description}")

        elif action == "delete" or action == "3":
            item = input("Input what do you want to delete: ")
            if item in tasks:
                tasks.pop(item)
                print ("Task successfully removed")
            else:
                print("Item dont exists")

        elif action == "quit" or action == "4":
            break

        else:
            print("You input invald action please try again")
main()
