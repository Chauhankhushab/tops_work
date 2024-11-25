//15. Write a program in C to find the largest and smallest words in a string
#include <stdio.h>

void find(const char *str, char *largest, char *smallest) {
    int len = strlen(str);
    int i = 0, wordStart = 0, wordEnd = 0;
    int maxLen = 0, minLen = len;
    largest[0] = smallest[0] = '\0';

    while (i <= len) {

        if (isspace(str[i]) || str[i] == '\0') {
            if (i > wordStart) {
                wordEnd = i;
                int wordLen = wordEnd - wordStart;
                
                if (wordLen > maxLen) {
                    maxLen = wordLen;
                    strncpy(largest, &str[wordStart], wordLen);
                }


                if (wordLen < minLen) {
                    minLen = wordLen;
                    strncpy(smallest, &str[wordStart], wordLen);
                }
            }
            wordStart = i + 1;
        }
        i++;
    }
}

int main() {
    char str[1000];
    char largest[1000], smallest[1000];


    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

  
    str[strcspn(str, "\n")] = '\0';


    find(str, largest, smallest);


    printf("The largest word is: %s\n", largest);
    printf("The smallest word is: %s\n", smallest);

    return 0;
}
