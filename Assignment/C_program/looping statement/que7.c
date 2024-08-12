//7. WAP to print number in reverse order e.g.: number = 64728 ---> reverse = 82746
#include<stdio.h>
int main(){
    int num,reverse=0,temp;

    printf("enter number :-");
    scanf("%d",&num);

    while (num !=0)
    {
       
        temp = num % 10;
        reverse= reverse * 10 + temp;
        num /=10;
    }
    printf("it is a reverse order:-%d \n",reverse);
    
}