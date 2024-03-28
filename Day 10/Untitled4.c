#include <stdio.h>

int main(){
    int row_a,row_b;
    int col_a,col_b;

    printf("Enter row and column for array A: ");
    scanf("%d %d",&row_a, &col_a);

    printf("Enter row and column for array B: ");
    scanf("%d %d",&row_b,&col_b);

    if (col_a != row_b){
        printf("Matrix is invalid");
        return 0;
    }

    int array_a[row_a][col_a];
    int array_b[row_b][col_b];

    printf("Enter elements for array A\n");
    for(int row =0;row<row_a;row++){
        for(int col = 0; col<col_a;col++){
            scanf("%d",&array_a[row][col]);
        }
    }

    printf("Enter elements for array B\n");
    for(int row = 0;row<row_b;row++){
        for(int col=0;col<col_b;col++){
            scanf("%d",&array_b[row][col]);
        }
    }

    printf("Array A is:\n");
    for(int row=0;row<row_a;row++){
        for(int col=0;col<col_a;col++){
            printf("%d ",array_a[row][col]);
        }
        printf("\n");
    }
    printf("Array B is:\n");
    for(int row=0;row<row_b;row++){
        for(int col=0;col<col_b;col++){
            printf("%d ", array_b[row][col] );
        }
        printf("\n");
    }


    int array_c[row_a][col_b];
    printf("Multiplication of A and B is:\n");
    for(int row=0;row<row_a;row++){
        for(int col=0;col<col_b;col++){
                array_c[row][col] =0;
                for(int row_2 = 0;row_2<row_b;row_2++){
                    array_c[row][col] += array_a[row][row_2] * array_b[row_2][col];
                }
                printf("%d ", array_c[row][col]);
        }
        printf("\n");
    }
}


