//29. Convert minutes into seconds and hours
#include<stdio.h>
int main(){
    int minutes,seconds,hours;

    printf("enter number of minutes");
    scanf("%d",&minutes);

    seconds= minutes * 60;
    hours = minutes / 60;

    printf("minutes is equal to %d \n",minutes);
    printf("seconds is equal to  %d \n",seconds);
    printf("hours is equal to%d \n",hours);
}