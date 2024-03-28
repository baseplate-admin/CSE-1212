
int main(){
    int row_a;
    int col_a;

    printf("Enter row and column for array A: ");
    scanf("%d %d",&row_a, &col_a);
    int scalar_factor;
    printf("Enter Scalar Factor: ");
    scanf("%d",&scalar_factor);

    int array_a[row_a][col_a];

    printf("Enter elements for array A\n");
    for(int row =0;row<row_a;row++){
        for(int col = 0; col<col_a;col++){
            scanf("%d",&array_a[row][col]);
        }
    }

    printf("Scalar multiplication of %d and Array is is:\n",scalar_factor);
    for(int row=0;row<row_a;row++){
        for(int col=0;col<col_a;col++){
            printf("%d ",scalar_factor*array_a[row][col]);
        }
        printf("\n");
    }

}

