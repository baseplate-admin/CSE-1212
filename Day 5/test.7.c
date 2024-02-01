#include <stdio.h>

void main(){
    int n,reverse = 0;
    printf("Enter a number to print it's reverse: ");
    scanf("%d",&n);

    while(n){
        int d = n % 10;
        reverse = reverse * 10 + d;
        n = n / 10 ;
    }
    printf("%d\n",reverse);
}
