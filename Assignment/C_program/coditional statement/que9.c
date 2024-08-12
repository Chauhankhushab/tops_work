/*9. C Program to Check Uppercase or Lowercase or Digit or Special 
Character*/
#include<stdio.h>
int main(){
    char ch;

    printf("enter a character:-");
    scanf("%c",&ch);

    if (ch >= 'A'  && ch <= 'Z' )
    {
        printf("it is uppercase %c",ch);
    }
    else if (ch >= 'a' && ch <= 'z')
    {
       printf("it is lowercase %c",ch);
    
    }
    else if (ch >= '0' && ch <= '9') {
        printf("%c is a digit\n", ch);
    }
    else
    {
        printf("it is special character %c",ch);
    }
    
}