// Write a program in C to print individual characters of a string in reverse order

#include <stdio.h>
void revch(char str[], int length) {
    for (int i = length - 1; i >= 0; i--) {
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

    printf("Characters in reverse order:\n");
    revch(str, length); 

}