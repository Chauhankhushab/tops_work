# Ques:

# Practical Example 8: Write a Python program to check if a person is eligible to donate blood
# using a nested if.

age=int(input("Enter Your Age: "))
if age>=18:
    print("Choose: ")
    print("1.Any Diseases")
    print("2.No Diseases")
    choose=int(input("Choose 1 or 2: "))

    if choose==1:
        print("You Are Not Eligible To Donate Blood!")
    else:
        print("You Are Eligible To Donate Blood!")