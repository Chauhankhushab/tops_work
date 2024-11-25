// Write a program in C to combine two strings manually
#include <stdio.h>

int main() {
    char str1[100], str2[50], combined[150];
    int i = 0, j = 0;

    printf("Enter the first string: ");
    scanf("%[^\n]s", str1);

    
    getchar(); 

    printf("Enter the second string: ");
    scanf("%[^\n]s", str2);

    while (str1[i] != '\0') {
        combined[i] = str1[i];
        i++;
    }

    while (str2[j] != '\0') {
        combined[i + j] = str2[j];
        j++;
    }

    combined[i + j] = '\0'; // Null-terminate the combined string

    printf("Combined string: %s\n", combined);

    return 0;
}