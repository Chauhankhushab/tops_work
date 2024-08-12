//14. Accept 5 numbers from user and find those numbers factorials
#include<stdio.h>
void main(){
    int number1,number2,number3,number4,number5;
    int fact1 = 1;
    int fact2 = 1;
    int fact3 = 1;
    int fact4 = 1;
    int fact5 = 1;
    int i =1;
    int a =1;
    int b =1;
    int c =1;
    int d =1;
    printf("Enter number1: ");
    scanf("%d",&number1);
    printf("Enter number2: ");
    scanf("%d",&number2);
    printf("Enter number3: ");
    scanf("%d",&number3);
    printf("Enter number4: ");
    scanf("%d",&number4);
    printf("Enter number5: ");
    scanf("%d",&number5);
    while(a<=number1){
        fact1 = fact1 * a;
        a++;
    }
    while(i<=number2){
        fact2 = fact2 * i;
        i++;
    }
    while(b<=number3){
        fact3 = fact3 * b;
        b++;
    }
    while(c<=number4){
        fact4 = fact4 * c;
        c++;
    }
    while(d<=number5){
        fact5 = fact5 * d;
        d++;
    }
    printf("factorial number1 is %d\n", fact1);
    printf("factorial number2 is %d\n", fact2);
    printf("factorial number3 is %d\n", fact3);
    printf("factorial number4 is %d\n", fact4);
    printf("factorial number5 is %d\n", fact5);
}