//17.Calculate 5 numbers from user and calculate number of even and odd using 
//of while loop

#include <stdio.h>

int main() {
    int num, even = 0, odd = 0, i = 1;

    while (i <= 5) {
        printf("Enter number ");
        scanf("%d", &num);

        if (num % 2 == 0) {
            even++;
        } else {
            odd++;
        }

        i++;
    }

    printf("Number of even numbers: %d\n", even);
    printf("Number of odd numbers: %d\n", odd);

   
}

