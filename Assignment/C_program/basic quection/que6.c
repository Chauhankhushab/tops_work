//6. Find area of Triangle Formula : A = 1/2 × b × h
#include<stdio.h>
int main(){
    float A,B,H;
    printf("ENTER THE BASE OF TRIANGLE:-");
    scanf("%f",&B);
     printf("ENTER THE HEIGHT OF TRIANGLE:-");
    scanf("%f",&H);

    A=(1/2.0)*B*H;

    printf("THE AREA OF TRIANGLE IS:-%.2f",A);
}