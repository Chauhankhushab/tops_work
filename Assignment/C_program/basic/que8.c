//8. Find circumference of Rectangle formula : C = 4 * a
#include<stdio.h>
int main(){
    float A,W,L;
    printf("ENTER A WIDTH OF REACTANGLE:-");
    scanf("%f",&W);

     printf("ENTER A LENGHT OF REACTANGLE:-");
    scanf("%f",&L);

    A=2*(L+W);

    printf("IT IS AREA OF RECTANGLE:-%.2f",A);
}