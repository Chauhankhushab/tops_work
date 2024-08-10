
//array operation multiplication.
#include<stdio.h>
int main(){
    int row,col,r,c,arr1[20][20],arr2[20][20],sum[20][20],sub[20][20],mul[20][20];
    printf("Enter numbers of rows:");
    scanf("%d",&r);
    printf("Enter cols:");
    scanf("%d",&c);
    printf("Enter elements for array 1:\n");
    for(row=0;row<r;row++){
        for(col=0;col<c;col++){
            scanf("%d",&arr1[row][col]);
        }
    }
    printf("Enter elements for array 2:\n");
    for(row=0;row<r;row++){
        for(col=0;col<c;col++){
            scanf("%d",&arr2[row][col]);
        }
    }
   
     printf("\n Array 1:\n");
    for(row=0;row<r;row++){
        printf("\n");
        for(col=0;col<c;col++){
            printf("%d \t",arr1[row][col]);
        }
    }
    
     printf("\n Array 2:\n");
    for(row=0;row<r;row++){
        printf("\n");
        for(col=0;col<c;col++){
            printf("%d \t",arr2[row][col]);
        }
    }

 
    for(row=0;row<r;row++){
        for(col=0;col<c;col++){
            mul[row][col]=0;
            for(int k=0;k<c;k++){
                mul[row][col]+=arr1[row][k]*arr2[k][col];
            }
        }
    }
    printf("\n Multiplication array\n");
     for(row=0;row<r;row++){
        printf("\n");
        for(col=0;col<c;col++){
            printf("%d \t",mul[row][col]);
        }
    }
}