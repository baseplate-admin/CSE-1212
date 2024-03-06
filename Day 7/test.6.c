#include<stdio.h>


int main(){
    int n,r;

    scanf("%d %d",&n,&r);
    int carry;
    int n_factorial=1;
    carry=n;
    while(carry){
        n_factorial = n_factorial * carry;
        carry--;
    }


    int n_minus_r_factorial = 1;
    carry = n-r;
    while(carry){
        n_minus_r_factorial = n_minus_r_factorial * carry;
        carry--;
    }

    double npr = n_factorial / n_minus_r_factorial;

    printf("%lf",npr);
    return 0;
}
