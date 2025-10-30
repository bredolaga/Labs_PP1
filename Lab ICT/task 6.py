students = [('Alice', 85), ('Bob', 92), ('Charlie', 78), ('David', 95)]

students.sort(key=lambda x: x[1], reverse=True)

for name, score in students:
    print(name, score)
