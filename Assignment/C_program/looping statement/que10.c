/*10. Write a program you have to make a summation of first and last Digit. (E.g., 
1234 Ans: -5)*/
#include<stdio.h>
int main(){
    int number;
    int first_digit = 0;
    int last_digit = 0;
    int rem;
    int total;
    printf("Enter number :");
    scanf("%d", &number);
    rem = number%10;
    last_digit = rem;
    while(number!=0){
        rem = number%10;
        number = number/10;
    }
    first_digit = rem;
    total = first_digit + last_digit;
    printf("\n total : %d", total);   
}

