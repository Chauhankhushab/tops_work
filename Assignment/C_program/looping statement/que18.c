//18.Write a C Program to Print the Multiplication Table of N

#include <stdio.h>

int main() {
    int N, i;

    printf("Enter a number: ");
    scanf("%d", &N);

    printf("Multiplication Table of %d:\n", N);
    for (i = 1; i <= 10; i++) {
        printf("%d * %d = %d\n", N, i, N * i);
    }

    return 0;
}

