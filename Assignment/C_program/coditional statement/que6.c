//6. Find the Character Is Vowel or Not
#include<stdio.h>
int main(){
    char ch = 'A';
    printf("enter a character:-");
    scanf("%c",&ch);
    if (ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E'
        || ch == 'i' || ch == 'I' || ch == 'o' || ch == 'O'
        || ch == 'u' || ch == 'U') {
 
        printf("The character %c is a vowel.\n", ch);
    }
    else {
        printf("The character %c is a consonant.\n", ch);
    }
 
    return 0;
}
