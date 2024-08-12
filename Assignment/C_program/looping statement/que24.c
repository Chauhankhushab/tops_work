//24. 1 + 2 + 3 + 4 + 5 + ... + n
#include<stdio.h>
int main(){
    int i,num,sum=0;
    printf("enter number where to end series:-");
    scanf("%d",&num);
    printf("1");
    for (int i = 2; i <= num; i++)
    {
        if(i!=num){
            printf("+ %d",i);
        }
        else{
            printf("+ %d",i);
        }
        sum=sum+i;
    }
    printf(" = %d",sum+1);
    
}