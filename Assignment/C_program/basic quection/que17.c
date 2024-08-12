//17. Calculate person’s insurance premium based on salary
#include<stdio.h>
int main(){
    float SALARY;
    float PREMIUM;//insurance premium=5%
    printf("ENTER A ANNUAL SALARY:-");
    scanf("%f",&SALARY);

    PREMIUM  = SALARY * 0.05;

    printf("INSURANCE PREMIUM:-%.2f\n",PREMIUM);

    return 0;


}