
//22. Accept 3 numbers from user using while loop and check each numbers palindrome


#include <stdio.h>

int main() {
    int num, reverse =0, remainder, count = 1;
    while (count <= 3) {
        printf("Enter number:- %d ", count);
        scanf("%d", &num);
        int temp = num;
        while (temp != 0) {
            remainder = temp % 10;
            reverse = reverse * 10 + remainder;
            temp /= 10;
        }
        if (num == reverse)
            printf("%d is a palindrome number.\n", num);
        else
            printf("%d is not a palindrome number.\n", num);
        count++;
    }
    return 0;
}
