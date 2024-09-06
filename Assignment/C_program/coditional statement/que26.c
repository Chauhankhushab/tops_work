/*
36. Write a C program to input electricity unit charges and calculate total
electricity bill according to the given condition:
For first 50 units Rs. 0.50/unit 
For next 100 units Rs. 0.75/unit 
For next 100 units Rs. 1.20/unit 
For unit above 250 Rs. 1.50/unit
An additional surcharge of 20% is added to the bill
*/

#include <stdio.h>

int main() {
    int units;
    float charge, total_bill, surcharge ,bill=0;

    printf("Enter the number of units consumed: ");
    scanf("%d", &units);

    if (units <= 50) {
        charge = units * 0.50;
    } else if (units <= 150) {
        charge = 50 * 0.50 + (units - 50) * 0.75;
    } else if (units <= 250) {
        charge = 50 * 0.50 + 100 * 0.75 + (units - 150) * 1.20;
    } else {
        charge = 50 * 0.50 + 100 * 0.75 + 100 * 1.20 + (units -250) * 1.5;
        surcharge = total_bill * 0.2 ;
        bill += surcharge;
         printf("Total electricity bill: Rs. %.2f\n", bill);
    }

}

