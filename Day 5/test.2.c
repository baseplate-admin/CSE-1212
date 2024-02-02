#include <stdio.h>

void main(){
    int n,r;
    printf("Enter numbers in order (n r):");
    scanf("%d %d",&n, &r);

    int n_factorial = 1;
    for(int carry=n;carry>0;carry--){
        n_factorial = carry * n_factorial;
    }

    int r_factorial = 1;
    for(int carry=r;carry>0;carry--){
        r_factorial = carry * r_factorial;
    }

    int n_minus_r_factorial= 1;
    for(int carry=(n-r);carry>0;carry--){
        n_minus_r_factorial = n_minus_r_factorial * carry;
    }

    double ncr  = n_factorial/(r_factorial*n_minus_r_factorial);
    printf("%lf\n",ncr);
}