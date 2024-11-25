// Write a program in C to separate individual characters from a string.

#include <stdio.h>
void character(char str[], int length) {
    for (int i = 0; i < length; i++) {
        printf("%c\n", str[i]); 
    }
}

int main() {
    char str[100];
    int length = 0;

    printf("Enter a string: ");
    scanf("%[^\n]s", str); 

    while (str[length] != '\0') {
        length++;
    }

    printf("Characters Are:\n");
    character(str, length); 
}
