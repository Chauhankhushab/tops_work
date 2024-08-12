//8 Write a program to find out the max from given number (E.g., No: -1562 
//Max number is 6)
#include<stdio.h>
void main(){
    int number;
    int rem = 0;
    int large = 0;
    printf("Enter a number: ");
    scanf("%d",&number);
    do{
        rem = number%10;
        if(rem>large){
            large = rem;
        }
        number = number/10;
    }while(number!=0);
    printf("larger digit is:%d",large);
}
