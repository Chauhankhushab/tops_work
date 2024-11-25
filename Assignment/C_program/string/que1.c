// 1. Write a program in C to find the length of a string without using library functions.
#include<stdio.h>
int main(){
    char string[20];
    printf("Enter String:");
    gets(string);
    int length=0;
    printf("\n String=%s",string);
     for(int i=0;string[i]!='\0';i++){
        length++;
     }
     printf("\n Length:%d",length);
}