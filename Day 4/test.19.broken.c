#include <stdio.h>
#include <math.h>

void main(){
    int n,is_prime;

    printf("Enter number to check if it's prime: ");
    scanf("%d",&n);
    double square_root_of_n = sqrt(n);

    while(square_root_of_n){
        if(n%(int)(square_root_of_n) == 0){
            is_prime = 1;
        }
    }
    if(is_prime == 1){
        printf("Not Prime");
    }else{
        printf("Is Prime");
    }
}