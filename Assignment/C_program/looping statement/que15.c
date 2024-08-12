//15.Calculate sum of 10 numbers using of while loop
#include<stdio.h>
void main(){
    int sum=0;
    int num;
    
    int i=1;
    while(i<=10){
         printf("\n Enter number:");
         scanf("%d",&num);
         sum=sum+i;
         i++;
    }
    printf("\n sum : %d",sum);
}