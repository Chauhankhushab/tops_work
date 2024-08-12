//10. WAP to check whether a number is negative, positive or zero
#include<stdio.h>
int main(){
    int num;

    printf("enter a number:-");
    scanf("%d",&num);

    if (num < 0)
    {
       printf("number is negative:- %d",num);
    }
    else if (num > 0)
    {
        printf("number is positive:- %d",num);
    }
    else
    {
       printf("number is zero:- %d",num);
    }
    
}