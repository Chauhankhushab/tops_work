/*
21. Write a program in C to read any Month Number in integer and display the 
number of days for this month.
*/
#include<stdio.h>
int main(){
    int month_number;
    printf("Enter the month number: ");
    scanf("%d", &month_number);
    switch (month_number) 
    {
    case 1:
        printf("it is January %d",month_number);
        break;
    case 2:
         printf("it is February %d",month_number);
        break;
        
    case 3:
     printf("it is March %d", month_number);
     break;
     case 4:
     printf("it is April %d", month_number);
     break;
        
    case 5:
     printf("it is May %d", month_number);
     break;
     case 6:
     printf("it is June %d", month_number);
     break;
     case 7:
     printf("it is July %d", month_number);
     break;
     case 8:
        printf("it is August %d", month_number);
        break;
        
    case 9:
     printf("it is September %d", month_number);
     break;
        
    case 10:
     printf("it is October %d", month_number);
     break;
     case 11:
     printf("it is November %d", month_number);
     break;
     case 12:
     printf("it is December %d", month_number);
     break;
     default:
     printf("Invalid month number!");
     break;

    }
    if (month_number ==1 || month_number ==3 || month_number ==5 || month_number ==7 || month_number ==8 || month_number ==10 || month_number || 12)
    {
       printf("\n 31 days in this month");
    }
    else if (month_number == 2){
        printf("\n 28 or 29 days in this month");
    }
    else if (month_number ==4|| month_number== 6|| month_number==9||month_number==11)
    {
        printf("\n 30 days in this month");
        
    }
    
    
}