//31. Convert kilometers into meters
#include<stdio.h>
int main() {
    float kilometers, meters;

    printf("Enter distance in kilometers: ");
    scanf("%f", &kilometers);

    meters = kilometers * 1000;

    printf("kilometers is equal to  meters\n %.2f ", meters);

    return 0;
}