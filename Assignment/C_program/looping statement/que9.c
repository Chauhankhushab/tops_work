//.9 Write a program make a summation of given number (E.g., 1523 Ans: -11)
#include<stdio.h>
void main(){
      int number;
    int sum = 0;
    int rem;
    printf("Enter number :");
    scanf("%d", &number);
    while(number!=0){
        rem  = number%10;
        sum = sum + rem;
        number = number/10;
    }
    printf("sum = %d\n",sum);
}
