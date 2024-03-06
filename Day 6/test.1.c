#include <stdio.h>
#include <math.h>

void main(){
    int start,end;
    printf("Enter starting range and ending range, seperated by whitespace. Eg :2 3\n");
    scanf("%d %d", &start,&end);

    while(start <= end){
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