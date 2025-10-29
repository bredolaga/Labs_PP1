Weight = float(input("Enter Weight (kg):"))
Height = float(input("Enter Height (cm):")) / 100
BMI = (Weight / (Height ** 2))
if BMI <= 18.5:
    print("Underweight", BMI)
elif BMI >= 18.5 and BMI <= 24.9:
    print("Normal weight", BMI)
elif BMI >= 25 and BMI <= 29.9:
    print("Overweight", BMI)
else:
    print("Obesity", BMI)
