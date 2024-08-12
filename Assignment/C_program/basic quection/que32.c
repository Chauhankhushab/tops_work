//32.32. Accept 2 numbers and find out its sum check it size
#include <stdio.h>

int main() {
    float num1, num2, sum;

    printf("Enter the first number: ");
    scanf("%f", &num1);

    printf("Enter the second number: ");
    scanf("%f", &num2);

    sum = num1 + num2;

    printf("The sum is: %.2f\n", sum);
     printf("\n size = %d",sizeof(sum));

    if (sum >= 1000) {
        printf("/n The result is large size!");
    } 
    else {
        printf("\n The result is small size!");
    }
}

