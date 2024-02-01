#include <stdio.h>


void main(){

    long long n;
    
    int digits = 0;

    printf("Enter a number to check digits: ");
    scanf("%lu",&n);
    long long actual;
    actual = n;

    while(n){
        n = n/10;
        digits++;
    }
    printf("The digits of %lu is %d",actual,digits);
    printf("\n");
}