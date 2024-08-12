/*3. WAP to take 10 no. Input from user find out below values
a. How many Even numbers are there
b. How many odd numbers are there
c. Sum of even numbers
d. Sum of odd numbers*/

#include<stdio.h>

int main() {
    int i;
    int evenCount = 0, oddCount = 0, evenSum = 0, oddSum = 0;

    printf("Enter 10 numbers:\n");
    for(int i = 0; i < 10; i++) {

        scanf("%d", &i);
        if(i % 2 == 0) {
            evenCount++;
            evenSum=evenSum+i;
        } else {
            oddCount++;
            oddSum =oddSum+ i;
        }
    }

    printf("Results:\n");
    printf("a. Even numbers: %d\n", evenCount);
    printf("b. Odd numbers: %d\n", oddCount);
    printf("c. Sum of even numbers: %d\n", evenSum);
    printf("d. Sum of odd numbers: %d\n", oddSum);

    return 0;
}
