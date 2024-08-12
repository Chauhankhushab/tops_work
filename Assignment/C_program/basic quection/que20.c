///20. Accept monthly salary from the user and deduct 10% insurance premium, 10% loan installment find out of remaining salary.
#include<stdio.h>
int main(){
    float MONTHLY_SALARY;
    float INSURANCE_PREMIUM;//10%
    float LOAN_INSTALLMENT;//10%
    float REMAINING_SALARY;

    
    printf("ENTER A MONTHY SALARY:-");
    scanf("%f",&MONTHLY_SALARY);

    INSURANCE_PREMIUM=MONTHLY_SALARY * 0.10;

    LOAN_INSTALLMENT=MONTHLY_SALARY * 0.10;

    REMAINING_SALARY= MONTHLY_SALARY - INSURANCE_PREMIUM - LOAN_INSTALLMENT;

    printf("REMAINING SALARY:-%.2f\n",REMAINING_SALARY);

}