//15.Store 5 numbers in array and sort it in ascending order
#include <stdio.h>

int main() {
    int array[5];

    printf("Enter 5 numbers:\n");
    for (int row = 0; row < 5; row++) {
        scanf("%d", &array[row]);
    }
    for (int row = 0; row < 5; row++) {
        for (int col = 0 ; col < 5; col++) {
            if (row > col) {
                int temp = array[row];
                array[row] = array[col];
                array[col] = temp;
            }
        }
    }

    printf("Sorted numbers in ascending order:\n");
    for (int row = 0; row < 5; row++) {
        printf("%d\n", array[row]);
    }

}
