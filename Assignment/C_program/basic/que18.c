//18. Calculate person’s Annual salary
#include<stdio.h>
int main(){
    float MONTHLY_SALARY;
    float ANNUAL_SALARY;

    printf("ENTER A MONTHLY SALARY:-");
    scanf("%f",&MONTHLY_SALARY);

    ANNUAL_SALARY = MONTHLY_SALARY * 12;

    printf("ANNUAL SALARY:-%.2f\n",ANNUAL_SALARY);
    
}