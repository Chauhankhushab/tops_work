# Ques:
# Practical Example 4: Print this pattern using nested for loop
# *
# **
# ***
# ****
# *****

for row in range(1,7):
    for col in range(1,row):
        print("* ",end="")
    print("")
