//10. find the area of a rectangular prism formula : A=2(wl+hl+hw)
#include<stdio.h>
int main(){
    float A,W,L,H;
    printf("ENTER WIDTH OF A RECTANGULAR PRISM:-");
    scanf("%f",&W);
     printf("ENTER LENGHT OF A RECTANGULAR PRISM:-");
    scanf("%f",&L);
     printf("ENTER HEIGHT OF A RECTANGULAR PRISM:-");
    scanf("%f",&H);

    A = 2*( W*L + H*L + H*W );

     printf("IT IS AREA  OF A RECTANGULAR PRISM:-%.2f",A);
}