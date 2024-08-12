//26. Convert temperature Fahrenheit to Celsius
#include<stdio.h>
int main(){
    float Fahrenheit;
    float  Celsius;

    printf("enter temperature fahrenheit:-");
    scanf("%f",&Fahrenheit);

    Celsius= (Fahrenheit -32)*5.0/9.0;


    printf(" Fahrenheit is equal  to %.2f Celsius\n",Celsius);

}