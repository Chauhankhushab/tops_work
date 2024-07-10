//3. WAP to Find Area And Circumference of Circle
#include <stdio.h>
#define PI 3.14

int main() {
    float A, B, C;

    printf("Enter the radius of the circle: ");
    scanf("%f", &A);
    B = PI * A * A;
    C = 2 * PI * A;
    printf("Area of the circle: %.2f\n", B);
    printf("Circumference of the circle: %.2f\n", C);

}