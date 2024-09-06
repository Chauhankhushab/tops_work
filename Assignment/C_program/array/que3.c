//3. WAP to find reverse of string using recursion


#include <stdio.h>
#include <string.h>
void rs(char str[], int start, int end) {
    if (start >= end) {
        return; 
    }

    char temp = str[start];
    str[start] = str[end];
    str[end] = temp;

    rs(str, start + 1, end - 1);
}

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str); 
    int len = strlen(str);
    rs(str, 0, len - 1);
    printf("Reversed string: %s\n", str);
    return 0;
}