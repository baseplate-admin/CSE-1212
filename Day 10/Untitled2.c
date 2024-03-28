#include <stdio.h>

int main(){
    int row_a,row_b;
    int col_a,col_b;

    printf("Enter row and column for array A: ");
    scanf("%d %d",&row_a, &col_a);

    printf("Enter row and column for array B: ");
    scanf("%d %d",&row_b,&col_b);

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

    int small_row = row_a < row_b ? row_a:row_b;
    int small_col = col_a < col_b ? col_a:col_b;

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

    int largest_row = row_a > row_b ? row_a:row_b;
    int largest_col = col_a > col_b ? col_a:col_b;
    printf("Sum of A and B is:\n");
    for(int row=0;row<largest_row;row++){
        for(int col=0;col<largest_col;col++){
                int x,y;

                if ((row+1 > row_a) || (col+1>col_a)){
                     x = 0;
                }
                else {
                    x = array_a[row][col];
                }
                if (row+1 > row_b || col+1>col_b) {
                    y = 0;
                }
                else {
                    y = array_b[row][col];
                }
                printf("%d ",x+y);
        }
        printf("\n");
    }
}
