//12.WAP to accept 5 students name and store it in array
#include <stdio.h>

int main() {
    char array[5][50];
    printf("Enter names of 5 students:\n");
    for (int i = 0; i < 5; i++) {
        printf("Student %d: ", i + 1);
        scanf("%c", array[i]); // Leave space for null terminator
    }
    printf("Names of students:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d. %s\n", i + 1, array[i]);
    }
    return 0;
}
