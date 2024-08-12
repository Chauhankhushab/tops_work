//12. Program of Armstrong Number in C Using  While Loop
#include<stdio.h>
void main(){
    int num;
    int Check_num;
    int sum = 0;
    int rem;
    printf("Enter the number :");
    scanf("%d", &num);
    Check_num= num;
    while(num!=0){
        rem = num%10;
        sum+=rem*rem*rem;
        num = num/10;
    }
    if(sum==Check_num){
        printf("Armstrong number");
    }else{
        printf("Not armstrong");
    }
}