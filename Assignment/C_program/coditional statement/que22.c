/*
32. Write a C program to input basic salary of an employee and calculateits 
Gross salary according to following:
Basic Salary <= 10000 : HRA = 20%, DA = 80% 
Basic Salary <= 20000 : HRA = 25%, DA = 90%
Basic Salary > 20000 : HRA = 30%, DA = 95%\
*/
#include<stdio.h>
int main(){
    int Basic_salary,HRA,DA,Gross_salary;
    printf("Enter basic Salary: ");
    scanf("%d",&Basic_salary);
    if (Basic_salary <=10000)
    {
         HRA = 0.20 * Basic_salary;
         DA = 0.80 * Basic_salary;
         Gross_salary = Basic_salary + HRA + DA;
        printf("Gross Salary: %d\n", Gross_salary);
    }
    else if (Basic_salary <= 20000)
    {
     HRA = 0.25 * Basic_salary;
     DA = 0.90 * Basic_salary;
     Gross_salary = Basic_salary + HRA + DA;
     printf("Gross Salary: %d\n", Gross_salary);
    }
    else if (Basic_salary > 20000)
    {
        HRA = 0.30 * Basic_salary;
        DA = 0.95 * Basic_salary;
        Gross_salary = Basic_salary + HRA + DA;
        printf("Gross Salary: %d\n", Gross_salary);
    }
    
    
}