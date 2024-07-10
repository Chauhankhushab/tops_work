//21. Accept 2 numbers from user and swap 2 numbers with using 3rd variable 
#include<stdio.h>
int main(){
    int NUMBER_1;
    int NUMBER_2;
    int TEMP;

    printf("ENTER A NUMBER 1:-");
    scanf("%d",&NUMBER_1);

    printf("ENTER A NUMBER 2:-");
    scanf("%d",&NUMBER_2);

    TEMP=NUMBER_1;
    NUMBER_1=NUMBER_2;
    NUMBER_2=TEMP;
    printf("SWAPPED NUMBER:- %d,%d \n", NUMBER_1,NUMBER_2);
}
// without using 3rd variable
#include<stdio.h>
int main(){
    int NUMBER_1;
    int NUMBER_2;

    printf("ENTER A NUMBER 1:-");
    scanf("%d",&NUMBER_1);

    printf("ENTER A NUMBER 2:-");
    scanf("%d",&NUMBER_2);

    NUMBER_1 = NUMBER_1 + NUMBER_2 ;
    NUMBER_2 = NUMBER_1 - NUMBER_2;
    NUMBER_1 = NUMBER_1 - NUMBER_2
    printf("SWAPPED NUMBER:- %d,%d \n", NUMBER_1,NUMBER_2);
}
