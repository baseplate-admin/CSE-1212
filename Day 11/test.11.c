#include <stdio.h>


int fact(int n){
    if (n==1) return 1;

    return n*fact(n-1);
}

int main(){
    int n;
    printf("Enter a number to check factorial: ");
    scanf("%d",&n);
    printf("Factorial is : %d",fact(n));
}
