/*19. Write a program in C to calculate and print the electricity bill of a given 
customer. The customer ID, name, and unit consumed by the user should 
be captured from the keyboard to display the total amount to be paid to the 
customer. The charge are as follow :*/
#include<stdio.h>
void main(){
    float unit,bill;
    printf("Enter the unit :");
    scanf("%f",&unit);
    if(unit>350){
        bill = unit * 1.2;
        printf("\n Bill = %f",bill);
    }else if(unit>=350 || unit<=600){
        bill = unit * 1.50;
        printf("\n Bill = %f",bill);
    }else if(unit>=600 || unit<=800){
        bill = unit * 1.80;
        printf("\n Bill = %f",bill);
    }else if(unit>800){ 
        bill = unit * 2.00;
        printf("\n Bill = %f",bill);
    }else if(unit == 800){
        bill = unit*0.18;
        printf("\n Bill = %f",bill);
    }
}