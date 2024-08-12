/*
18.. Write a C program to calculate profit and loss on a transaction.

*/
#include <stdio.h>

int main()
{
    int cost_price,selling_price, amt; 
    
    
    printf("Enter cost price: ");
    scanf("%d", &cost_price);
    printf("Enter selling price: ");
    scanf("%d", &selling_price);
    
    if(selling_price > cost_price)
    {
        printf("Profit ");
    }
    else if(cost_price > selling_price)
    {
       
        printf("Loss ");
    }
    else
    {
    
        printf("No Profit No Loss.");
    }

    return 0;
}
