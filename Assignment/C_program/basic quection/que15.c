//15. Convert school’s name in abbreviated form
#include<stdio.h>
int main(){
    char FNAME[20],MNAME[20],LNAME[20];
    printf("ENTER THE FIRST NAME,MIDDLE NAME,LAST NAME \n");
    scanf("%s %s %s",FNAME,MNAME,LNAME);
    printf("ABBREVIATEDNAME:-");
    printf("%s. %s. %s \n", FNAME[0],MNAME[0],LNAME);
}
