#include <stdio.h>

void main(){
    printf("Enter number to check factors: ");
    int n;
    scanf("%d",&n);
   
    printf("Factors are: ");
    for (int carry=1;carry <= n;carry++)
    {
        if(n % carry == 0) printf("%d ",carry);
    }
    printf("\n");
}