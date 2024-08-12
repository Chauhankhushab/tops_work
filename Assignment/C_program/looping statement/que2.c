//2. WAP to accept 5 numbers from user and display all numbers
#include<stdio.h>

int main() {
    int numbers,num1,num2,num3,num4,num5;
    printf("Enter 5 numbers:\n");
    printf("Enter the number 1 :\n");
    scanf("%d",&num1);
    printf("Enter the number 2 :\n");
    scanf("%d",&num2);
    printf("Enter the number 3 :\n");
    scanf("%d",&num3);
    printf("Enter the number 4 :\n");
    scanf("%d",&num4);
    printf("Enter the number 5 :\n");
    scanf("%d",&num5);
    printf("Number is:\n ");
    for(int i=num1;i<=num5;i++){
        printf(" %d \n",i);
    }
}

