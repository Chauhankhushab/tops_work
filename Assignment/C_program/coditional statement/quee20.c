/*30. If bill exceeds Rs. 800 then a surcharge of 18% will be charged andthe 
minimum bill should be of Rs. 256/-*/

#include <stdio.h>

int main() {
    float bill;
    printf("Enter the total bill amount: ");
    scanf("%f", &bill);

    if (bill > 800) {
        float surcharge = (bill * 0.18);
       printf("")

        if (bill < 256) {
            bill = 256;
        }
    }

    printf("Final bill amount: %.2f\n", bill);

    return 0;
}