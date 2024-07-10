//12. Accept number of students from user. I need to give 5 apples to each student. How many apples are required?
#include<stdio.h>
int main(){
    int STUDENTS;
    int APPLES = 5;
    int TOTAL_APPLES;
     printf("ENTER NUMBER OF STUDENTS :-");
     scanf("%d",&STUDENTS);

     TOTAL_APPLES= STUDENTS*APPLES;
     
     printf("TOTAL_APPLES REQUIRED:-%d",TOTAL_APPLES);
}