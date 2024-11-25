/*
5. WAP to take two Array input from user and sort them in ascending or 
descending order as per user’s choice
*/

#include<stdio.h>
int main() {
    int size, size1;
    printf("\nEnter size for Array 1 (Ascending order): ");
    scanf("%d", &size);
    printf("\nEnter size for Array 2 (Descending order): ");
    scanf("%d", &size1);
    int arr[size];
    int arr2[size1];
    printf("Enter %d elements for the first array (ascending order):\n", size);
    for(int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter %d elements for the second array (descending order):\n", size1);
    for(int j = 0; j < size1; j++) {
        scanf("%d", &arr2[j]);
    }
    
    // Sorting first array in ascending order
    for(int i = 0; i < size; i++) {
        for(int j = i + 1; j < size; j++) {
            if(arr[i] > arr[j]) {
                int temp1 = arr[i];
                arr[i] = arr[j];
                arr[j] = temp1;
            }
        }
    }
    
    // Sorting second array in descending order
    for(int i = 0; i < size1; i++) {
        for(int j = i + 1; j < size1; j++) {
            if(arr2[i] < arr2[j]) {
                int temp2 = arr2[i];
                arr2[i] = arr2[j];
                arr2[j] = temp2;
            }
        }
    }
    
    printf("\nSorted first array (ascending order):\n");
    for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    
    printf("\n");

    printf("\nSorted second array (descending order):\n");
    for(int j = 0; j < size1; j++) {
        printf("%d ", arr2[j]);
    }
}
