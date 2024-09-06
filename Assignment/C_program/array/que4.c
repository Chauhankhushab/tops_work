//4. WAP to find factorial using recursion
#include<stdio.h>
int recursion();
int main(){
    int number;
    int fact;
    printf("Enter the number :");
    scanf("%d",&number);
    fact = recursion(number);
    printf("\n factorial is :%d",fact);
    
}
int recursion(int number){
    if(number==1){
        return 1;
    }else{
        return number*recursion(number-1);
    }
}