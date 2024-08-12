/*
4. WAP to make simple calculator (operation include Addition, Subtraction, 
Multiplication, Division, modulo) using conditional statement
*/

#include <stdio.h>
int main() {
    int num1, num2;
    char operation;

    printf("Enter number 1: ");
    scanf("%d", &num1);

    printf("Enter operator (\n   +  \n   -  \n   *  \n   /  \n   %%  ");
    scanf(" %c", &operation);

    printf("Enter number 2: ");
    scanf("%d", &num2);

    if (operation == '+') {
        printf("Result: %d\n", num1 + num2);
    } else if (operation == '-') {
        printf("Result: %d\n", num1 - num2);
    } else if (operation == '*') {
        printf("Result: %d\n", num1 * num2);
    } else if (operation == '/') {
        if (num2 != 0) {
            printf("Result: %d\n", num1 / num2);
        } else {
            printf("Error: Division by zero!\n");
        }
    } else if (operation == '%') {
        if (num2 != 0) {
            printf("Result: %d\n", num1 % num2);
        } else {
            printf("Error: Modulo by zero!\n");
        }
    } else {
        printf("Invalid operator!\n");
    }

    return 0;
}





