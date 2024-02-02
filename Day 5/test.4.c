#include <stdio.h>
#include <math.h>

int main(){
    int n, is_prime=0;

    printf("Enter number to check if it's prime: ");
    scanf("%d",&n);

    double square_root_of_n = sqrt(n);


    for(int carry = 2;carry<=square_root_of_n && is_prime != 1;carry++){
        if(n % carry == 0){
            is_prime = 1;
        }
    }
    if (is_prime == 1) {
        printf("Not Prime");
    }else{
        printf("Is Prime");
    }
    printf("\n");
}