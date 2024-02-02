#include <stdio.h>

void main(){
    int n;
    printf("Enter a number to print it's reaminder: ");
    scanf("%d",&n);
    int d;
    
    while(n){
        d = n % 10;
        n = n / 10 ;
    }
    printf("%d",d);

}
