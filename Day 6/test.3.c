#include <stdio.h>
#include <math.h>

void main(){
    int base,power;

    scanf("%d %d",&base, &power);

    long long number = pow(base,power);

    printf("%lu",number);
    printf("\n");
    
}