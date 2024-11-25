//12. Write a program in C to find the number of times a given word 'is' appears in the given string
#include <stdio.h>
int count(const char *str, const char *word) {
    int count = 0;
    const char *tempStr = str;
    while ((tempStr = strstr(tempStr, word)) != NULL) {
        count++;
        tempStr++;  
        
    }
    return count;
}

int main() {
    char str[1000];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

  
    str[strcspn(str, "\n")] = '\0';

    int count = count(str, "is");


    printf("The word 'is' appears %d times in the string.\n", count);

    return 0;
}
