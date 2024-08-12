/*8. WAP to accept the height of a person in centimeters and categorize the 
person according to their height.*/
#include<stdio.h>
int main(){
    #include <stdio.h>
    float height;

    printf("Enter the height of the person (in centimeters): ");
    scanf("%f", &height);

    if (height < 150) {
        printf("Category: Short\n");
    } else if (height < 165) {
        printf("Category: Average\n");
    } else if (height < 180) {
        printf("Category: Tall\n");
    } else {
        printf("Category: Very Tall\n");
    }

    
}

