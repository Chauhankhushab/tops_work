//6 . WAP to print Fibonacci series up to given numbers
#include<stdio.h>
int main(){
    int num,n1=0,n2=1,n3;
    printf("Enter number :-;");
    scanf("%d",&num);
   for (int i = 0; i <= num; i++)
   {
    printf("%d ",n1);
    n3=n1+n2;
    n1=n2;
    n2=n3;
   }
   return 0;
}
