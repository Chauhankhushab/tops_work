//27. Convert days into months
#include<stdio.h>
int main(){
    int days,months;
    printf("enter number of days:");
    scanf("%d",&days);

    months = days / 30;

    printf(" days is approximately equal to  months %d \n ",months);
}