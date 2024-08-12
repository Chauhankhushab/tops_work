// 1.. Write a program to find out the max number from given array using function
#include<stdio.h>
int main() {
    int arr[100];
    int size;
    int findmax;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("Enter %d elements: ", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    int max = findmax     (arr, size);

    printf("Maximum number in the array is: %d\n", max);

    return 0;
}



