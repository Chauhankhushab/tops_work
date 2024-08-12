//25. Accept 5 expense from user and find average of expense
#include<stdio.h>
int main(){
    float expense1,expense2,expense3,expense4,expense5;
    float sum,averange;

    printf("enter expense1:-");
    scanf("%f",&expense1);

     printf("enter expense2:-");
    scanf("%f",&expense2);

     printf("enter expense3:-");
    scanf("%f",&expense3);

     printf("enter expense4:-");
    scanf("%f",&expense4);

     printf("enter expense5:-");
    scanf("%f",&expense5);

    sum= expense1 + expense2 + expense3 + expense4 + expense5;

    averange = sum/ 5;

    printf("average expence : %.2f\n",averange);
    

}