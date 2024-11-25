// Write a program in C to extract a substring from a given string
#include <stdio.h>

void extractSubstring(char source[], char destination[], int start, int length) {
    int i;
    for (i = 0; i < length && source[start + i] != '\0'; i++) {
        destination[i] = source[start + i];
    }
    destination[i] = '\0';  
}

int main() {
    char str[100], substring[100];
    int start, length;

    printf("Enter a string: ");
    scanf("%[^\n]s", str);

    printf("Enter the starting position: ");
    scanf("%d", &start);

    printf("Enter the length of the substring: ");
    scanf("%d", &length);

    extractSubstring(str, substring, start, length);

    printf("Extracted substring: %s\n", substring);

}