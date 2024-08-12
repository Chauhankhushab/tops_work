///2. Write a program to make Simple calculator (to make addition, subtraction, multiplication, division and modulo)
#include<stdio.h>
int main(){
    int A,B,C;
    printf("ENTER A NUMBER1:-");
    scanf("%d",&A);
    printf("ENTER A NUMBER2:-");
    scanf("%d",&B);
    C=A+B;
    printf("\n IT IS ADDITION:-%d",C);
    C=A-B;
    printf("\n IT IS SUBTRACTION:-%d",C);
    C=A*B;
    printf("\n IT IS MULTIPLATION:-%d",C);
    C=A/B;
    printf("\nIT IS DIVISION:-%d",C);
    C=A%B;
    printf("\n IT IS MODULO:-%d",C);
}