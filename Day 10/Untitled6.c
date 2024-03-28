
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
    int array_b[col_a][row_a];

    for(int col = 0;col<col_a;col++){
        for(int row = 0;row<row_a;row++){
            array_b[col][row] = array_a[row][col];
        }
    }
    printf("Transpose of Array A is:\n");

    for(int col=0;col<col_a;col++){
        for(int row=0;row<row_a;row++){
            printf("%d ",array_b[col][row]);
        }
        printf("\n");
    }

}
