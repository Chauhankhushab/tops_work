//23. WAP to calculate swap 2 numbers with using of multiplication and division.
#include<stdio.h>
int main(){
        int NUMBER_1;
        int NUMBER_2;

        printf("ENTER A NUMBER1:-");
        scanf("%d",&NUMBER_1);

        printf("ENTER A NUMBER2:-");
        scanf("%d",&NUMBER_2);

        NUMBER_1=NUMBER_1*NUMBER_2;

        NUMBER_2=NUMBER_1/NUMBER_2;

        NUMBER_1=NUMBER_1/NUMBER_2;

        printf("SWAPPED NUMBER:-%d,%d\n",NUMBER_1,NUMBER_2);
}
