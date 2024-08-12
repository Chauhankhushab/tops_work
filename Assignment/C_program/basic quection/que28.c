//28. Convert years into days and months
#include<stdio.h>
int main(){
    int years,days,months;
    printf("enter number of years:");
    scanf("%d",&years);

    days = years * 365;
    months = years * 12;

    printf("years is equal to %d \n",years);
    printf("days is equal to  %d \n",days);
    printf("months is equal to%d \n",months);
}