contacts = {}

while True:
    print("\n1. Add contact")
    print("2. View all contacts")
    print("3. Search contact")
    print("4. Delete contact")
    print("5. Exit")

    choice = input("Choose: ").strip()

    if choice == "1":
        name = input("Enter name: ").strip()
        if name in contacts:
            print("Contact already exists")
        else:
            phone = input("Enter phone: ").strip()
            contacts[name] = phone
            print("Contact added")

    elif choice == "2":
        if not contacts:
            print("No contacts")
        else:
            for name, phone in contacts.items():
                print(name, ":", phone)

    elif choice == "3":
        name = input("Enter name: ").strip()
        if name in contacts:
            print(name, ":", contacts[name])
        else:
            print("Contact not found")

    elif choice == "4":
        name = input("Enter name: ").strip()
        if name in contacts:
            del contacts[name]
            print("Contact deleted")
        else:
            print("Contact not found")

    elif choice == "5":
        print("Exit")
        break

    else:
        print("Invalid choice")
