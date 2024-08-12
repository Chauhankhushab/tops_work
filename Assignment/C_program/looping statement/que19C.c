/*

  *
  * *
  * * *
  * * * *
  * * * * *
  * * * *
  * * * 
  * *
  *
*/
#include<stdio.h>
int main(){
    int row,col;
    for(int row=1;row<=6;row++){
        for(int col=1;col<=row;col++){
            printf("* ");
        }
        printf("\n");
    }
        for(row=2;row<=6;row++){
            for(col=1;col<=6-row+1;col++){
                printf("* ");
            }
            printf("\n");
        }
}