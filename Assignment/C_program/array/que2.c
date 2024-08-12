/*2. WAP of Addition, Subtraction, Multiplication and Division using Switch 
case.(Must Be Menu Driven)*/
#include <stdio.h>

int main() {
    int choice, num1, num2;

    printf("Menu:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    switch (choice) {
        case 1:
            printf("Result: %d\n", num1 + num2);
            break;
        case 2:
            printf("Result: %d\n", num1 - num2);
            break;
        case 3:
            printf("Result: %d\n", num1 * num2);
            break;
        case 4:
            if (num2 != 0)
                printf("Result: %f\n",num1 / num2);
            else
                printf("Error: Division by zero!\n");
            break;
        default:
            printf("Invalid choice!\n");
    }

    
}

