#include <stdio.h>


void main(){
    int n,r;
    printf("Enter numbers in order (n r):");
    scanf("%d %d",&n,&r);

    int n_factorial = 1;
    int carry = n;
    while(carry){
        n_factorial = carry * n_factorial;
        carry--;
    }

    int r_factorial = 1;
    carry = r;
    while(carry){
        r_factorial = carry * r_factorial;
        carry--;
    }

    int n_minus_r_factorial= 1;
    carry = (n-r);
    while (carry){
        n_minus_r_factorial = n_minus_r_factorial * carry;
        carry--;
    }

    double ncr  = n_factorial/(r_factorial*n_minus_r_factorial);
    printf("%lf\n",ncr);
    

}