//19.Calculate compound interest
#include<stdio.h>
#include<math.h>
int main(){
    float PRINCIPAL_AMOUNT; 
    float INTEREST_RATE;
    int TIME;
    float COMPOUND_INTERSET;

    printf("ENTER PRICIPAL AMOUNT:-");
    scanf("%f",&PRINCIPAL_AMOUNT);

     printf("ENTER INTEREST_RATE:-");
    scanf("%f",&INTEREST_RATE);

     printf("ENTER YEAR OF TIME:-");
    scanf("%d",&TIME);


   float amount = PRINCIPAL_AMOUNT * pow(( 1 + INTEREST_RATE / 100), TIME );
   printf("Amount=%f",amount);
    COMPOUND_INTERSET=amount-PRINCIPAL_AMOUNT;

    printf("\n COMPOUND INTERSET:-%f\n",COMPOUND_INTERSET);

}