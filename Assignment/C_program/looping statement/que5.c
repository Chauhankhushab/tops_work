//5. WAP to print factorial of given number
#include<stdio.h>
int main(){
    int num=5,fact=1;
    printf("Enter number:-");
    scanf("%d",&num);

    while(num>1){
        fact=fact*num;
        num--;
    }
    printf("Factorial of %d=%d",num,fact);
}