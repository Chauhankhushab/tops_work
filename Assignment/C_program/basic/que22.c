//22. Calculate compound interest(Compound Interest formula: a. Formula to calculate compound interest annually is given by: Amount= P(1 + R/100)t b. Compound Interest = Amount – P
#include<stdio.h>
int main(){
    float PRINCIPAL_AMOUNT; 
    float INTEREST_RATE;
    int TIME;
    float AMOUNT;
    float COMPOUND_INTERSET;

    printf("ENTER A PRICIPAL AMOUNT:-");
    scanf("%f",&PRINCIPAL_AMOUNT);

    printf("ENTER A INTEREST_RATE:-");
    scanf("%f",&INTEREST_RATE);

    printf("ENTER A TIME OF YEAR:-");
    scanf("%d",&TIME);

    AMOUNT = PRINCIPAL_AMOUNT *(1 + INTEREST_RATE/100)*TIME;

    COMPOUND_INTERSET=AMOUNT-PRINCIPAL_AMOUNT;

    printf("COMPOUND INTERSET:-%.2f",COMPOUND_INTERSET);
}