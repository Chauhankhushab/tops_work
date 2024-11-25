/*
6. WAP to make addition, Subtraction and multiplication of two matrix using 
2-D Array
*/

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
    //printing array1
     printf("\n Array 1:\n");
    for(row=0;row<r;row++){
        printf("\n");
        for(col=0;col<c;col++){
            printf("%d \t",arr1[row][col]);
        }
    }
       //printing array2
     printf("\n Array 2:\n");
    for(row=0;row<r;row++){
        printf("\n");
        for(col=0;col<c;col++){
            printf("%d \t",arr2[row][col]);
        }
    }
    //for adding two matrix:
    for(row=0;row<r;row++){
        for(col=0;col<c;col++){
            sum[row][col]=arr1[row][col]+arr2[row][col];
        }
    }
    printf("\n Addition =\n ");
        for(row=0;row<r;row++){
        printf("\n");
        for(col=0;col<c;col++){
            printf("%d \t",sum[row][col]);
        }
    }
    //for subtraction two matrix:
    for(row=0;row<r;row++){
        for(col=0;col<c;col++){
            sub[row][col]=arr1[row][col]-arr2[row][col];
        }
    }
    printf("\n Subtraction =\n ");
        for(row=0;row<r;row++){
        printf("\n");
        for(col=0;col<c;col++){
            printf("%d \t",sub[row][col]);
        }
    }
    // multiplication for arrays;
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
