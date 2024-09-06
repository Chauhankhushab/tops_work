/*30. If bill exceeds Rs. 800 then a surcharge of 18% will be charged andthe 
minimum bill should be of Rs. 256/-*/
#include<stdio.h>
void main(){
    int rs,charges;
    printf("Enter rs :");
    scanf("%d", &rs);
    if(rs>=256){
    if(rs >= 800){
        charges = (rs * 0.18);
        printf("Charges :%d\n", charges);
    }}else{
        printf("Not valid rs : %d", rs);
    }
}