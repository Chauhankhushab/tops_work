//9. Find circumference of Triangle formula : triangle = a + b + c
#include<stdio.h>
int main(){
    float A,B,C,P;
    printf("ENTER 1 NUMBER OF TRIANGLE:-");
    scanf("%f",&A);
     printf("ENTER 2 NUMBER OF TRIANGLE:-");
    scanf("%f",&B);
     printf("ENTER 3 NUMBER OF TRIANGLE:-");
    scanf("%f",&C);
    P=A+B+C;                 // calculate the perimeter
    printf("IT IS A CIRCUMFERENCE OF TRIANGLE:-%.2f",P);
} 