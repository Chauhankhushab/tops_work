//23. C Program to Reverse a Number Using FOR Loop
//Series Program:

#include<stdio.h>
void main(){
    int number;
    int rev=0;
    int rem;
    printf("Enter a Number: ");
    scanf("%d",&number);
    for(int i=1;number!=0;i++){
        rem=number%10;
        rev = rev*10+rem;
        number = number/10;
    }
    printf("\nReverse a Number:%d",rev);
}

