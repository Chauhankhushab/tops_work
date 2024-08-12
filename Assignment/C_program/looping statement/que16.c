//16.Calculate the Sum ofNatural Numbers Using the While Loop
#include<stdio.h>
void main(){
    int sum=0;
    int num;
    
    int i=1;
    while(i<=10){
         printf("\n Enter positive number:");
         scanf("%d",&num);
         sum=sum+i;
         i++;
    }
    printf("\n sum : %d",sum);
}