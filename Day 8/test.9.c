#include<stdio.h>

int main(){
    int _row=5,_col=5;

    int a[_row][_col];

    for(int row=0;row<_row;row++){

        for(int col=0;col<_col;col++){
            scanf("%d",&a[row][col]);
        }
    }

    for(int row=0;row<_row;row++){

        for(int col=0;col<_col;col++){
            printf("%d\t",a[row][col]);
        }
        printf("\n");
    }



}
