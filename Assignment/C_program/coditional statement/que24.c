/*
34. Accept month number and display month name
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
}