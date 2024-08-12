//13. WAP to find minimum number among 3 numbers using ternary operator
#include<stdio.h>
int main() {
    int num1, num2, num3, min;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    if (num1 < num2  &&  num2 < num3) {
            printf("minimum number is: %d\n", num1);
        } 
    else if (num2 < num1 && num2 < num3) {
            printf("minimum number is: %d\n", num2);
        } else  if(num3 < num1 && num3 < num2){
            printf("minimum number is: %d\n", num3);
        }
        else
        {
            printf("All numbers are equal.\n");
        }
        
    }



   






