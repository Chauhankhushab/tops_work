// Write a program in C to copy one string to another string.

#include <stdio.h>

void cs(char destination[], const char str[]) {
    int i = 0;
    while (str[i] != '\0') {
        destination[i] = str[i];
        i++;
    }
    destination[i] = '\0'; 
}

int main() {
    char str[100];
    char destination[100];

    printf("Enter the str string: ");
    scanf("%[^\n]s", str);

    int i = 0;
    while (str[i] != '\0') {
        if (str[i] == '\n') {
            str[i] = '\0';
            break;
        }
        i++;
    }

    cs(destination, str);

    printf("Copied string: %s\n", destination);

}