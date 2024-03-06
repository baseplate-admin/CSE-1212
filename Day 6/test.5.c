#include <stdio.h>
#include <math.h>

void main(){
    int start = 1;
    while(start <= 300){
        int n = start, is_prime=0;
        int carry = 2;
        double square_root_of_n = sqrt(n);

        while(carry<=square_root_of_n && is_prime != 1){
            if(n% carry == 0){
                is_prime = 1;
            }
            carry++;
        }
        if (is_prime != 1) {
            printf("%d ",start);
        }
        start++;
    }
}