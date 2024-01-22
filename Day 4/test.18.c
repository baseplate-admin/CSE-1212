#include <stdio.h>

void main(){
    printf("Enter number to check factors");
    int n;
    scanf("%d",&n);
    int carry=1;

    while (carry <= n)
    {
        if(n%carry == 0) printf("%d",carry);
        carry++;
    }
    
    
}