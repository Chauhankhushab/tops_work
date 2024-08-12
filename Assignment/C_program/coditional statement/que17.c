/*17. Write a C program to check whether a triangle can be formed with the given 
values for the angles*/


#include <stdio.h>  

void main()  
{  
    int x, y, z, sum;

    printf("Input three angles of triangle : "); 
    scanf("%d %d %d", &x, &y, &z); 

    sum = x + y + z;   

     
    if(sum == 180)   
    {  
        printf("The triangle is valid.\n");
    }  
    else  
    {  
        printf("The triangle is not valid.\n"); 
    }  
 }