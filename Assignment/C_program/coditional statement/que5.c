//5. Check Number Is Positive or Negative
#include<stdio.h>
int main(){
    int num1;
    int num2;

    printf("enter a number 1:-");
    scanf("%d",&num1);


    if (num1 > 0)
    {
       printf(" it is positive");
    }
    else if (num1 < 0)
    {
        printf("it is negative");
    }
    else{
        printf("invalid number");
    }
    
    


}
