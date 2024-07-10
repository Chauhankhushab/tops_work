//24. Accept 5 employees name and salary and count average and total salary
#include<stdio.h>
#include<string.h>
    struct EMLPOYEES
    {
       char NAME;
       float SALARY;

    };
int main(){
    struct EMPLOYESS employee[50];
    float TOTAL_SALARY=0;
    float AVERANGE_SALARY;

    for (int i = 0; i < 5; i++)
    {
        printf("ENTER EMPLOYEE %d NAME:-",i+1);
        scanf("%s",employee[i],NAME);

         printf("ENTER EMPLOYEE %d SALARY:-",i+1);
        scanf("%f",employee[i],SALARY);

        TOTAL_SALARY += employee[i],SALARY;

    }


    AVERANGE_SALARY = TOTAL_SALARY /5;

    printf("TOTAL SALARY:-%.2f\n",TOTAL_SALARY);
    printf("AVERANGE SALARY:-%.2f\n",AVERANGE_SALARY);



}
    


