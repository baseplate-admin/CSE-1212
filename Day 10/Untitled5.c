#include <stdio.h>


int main(){
    int row_a;
    int col_a;

    printf("Enter row and column for array A: ");
    scanf("%d %d",&row_a, &col_a);

    int array_a[row_a][col_a];

    printf("Enter elements for array A\n");
    for(int row =0;row<row_a;row++){
        for(int col = 0; col<col_a;col++){
            scanf("%d",&array_a[row][col]);
        }
    }

     printf("Array A is:\n");
        for(int row=0;row<row_a;row++){
            for(int col=0;col<col_a;col++){
                printf("%d ",array_a[row][col]);
            }
            printf("\n");
    }
    for(int row=0;row<row_a;row++){
        int sum_row = 0;
        for(int col=0;col<col_a;col++){
            sum_row+= array_a[row][col];
        }
        printf("Sum of row %d is %d\n",row+1,sum_row);
    }
    for(int col = 0;col<col_a;col++){
        int sum_col = 0;
        for(int row=0;row<row_a;row++){
            sum_col+= array_a[row][col];
        }
        printf("Sum of column %d is %d\n",col+1,sum_col);

    }

}
