//10.WAP to perform Palindrome number using for loop and function

#include<stdio.h>
int main(){
    int number;
    int rem;
    int rev = 0;
    printf("Enter a number: ");
    scanf("%d",&number);
    int check_num;
    check_num = number;
    while(number > 0){
        rem = number%10;
        rev = rev*10 + rem;
        number = number/10;
    }
    printf("\nReverse number: %d\n", rev);
    if(rev == check_num){
        printf("\nnumber %d is pallindrome", check_num);
    }else{
        printf("\nnumber %d is not pallindrome", check_num);   
    }
}
