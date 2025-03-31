# Ques:

# Practical Example 7: Write a Python program to calculate grades based on percentage using
# if-else ladder.

marks=int(input("Enter Percentage: "))


if marks>90 or marks==100:
    print("Grade-A!")
    print("Excellent!!")
elif marks>80 or marks<=90:
    print("Grade-B!")
    print("Good Job!!")
elif marks>60 or marks<=80:
    print("Grade-C!")
    print("Good!!")   
elif marks>35 or marks<=60:
    print("Grade-D!")
    print("Can Do Better!")  
else:
    print("Grade-E!")
    print("Better Luck Next Time!")