//24. Accept 5 employees name and salary and count average and total salary

#include<stdio.h>
void main(){
    int per1, per2, per3, per4, per5,avg,total_salary;
    printf("\n Enter salary of pr1 =");
    scanf("%d",&per1);
    printf("\n Enter salary of pr2 =");
    scanf("%d",&per2);
    printf("\n Enter salary of pr3 =");
    scanf("%d",&per3);
    printf("\n Enter salary of pr4 =");
    scanf("%d",&per4);
    printf("\n Enter salary of pr5 =");
    scanf("%d",&per5);
    total_salary = per1+per2+per3+per4+per5;
    avg = total_salary/5;
    printf("\n average salary of person = %d",avg);
    printf("\n total salary of person = %d",total_salary);
}
    


