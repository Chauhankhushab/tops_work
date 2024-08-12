//7. Accept marks from user and check pass or fail
#include<stdio.h>
int main(){
    int num1,num2;
    printf("enter a mark:-");
    scanf("%d",&num1);

    printf("enter passng mark:-");
    scanf("%d",&num2);

    if(num1>=num2){
        printf("result is pass");

    }
    else{
        printf("result is fail");
    }

}