//26. (1)+ (1+2) + (1+2+3) + (1+2+3+4) + ... + (1+2+3+4+...+n)
#include<stdio.h>
int main(){
    int i,num,sum=0,j;
    printf("enter number where to end series:-");
    scanf("%d",&num);
    for ( i = 1; i <=num; i++){
        for ( j = 0; j <= i; j++)
        {
            sum+=j;
        }
        
    }
    printf(" = %d",sum);



    
}