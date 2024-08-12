//13. calculate the Factorial of a Given Number using while loop
#include <stdio.h>
int main(){
    int num, fact = 1, i=1;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    while(i<=num){
        fact=fact*i;
        i++;
    }
    printf("it is factorial:-%d\n", fact);

}