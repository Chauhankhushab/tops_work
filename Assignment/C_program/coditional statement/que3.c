/*
3. WAP to check if the given year is a leap year or not.
*/
#include <stdio.h>

int main() {
    int year;

    printf("Enter a year: ");
    scanf("%d", &year);

    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
        printf("it is a leap year %d \n", year);
    } else {
        printf("it is not a leap year %d \n", year);
    }

}