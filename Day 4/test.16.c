#include <stdio.h>

void main(){
    int number;
    printf("Enter a number to check factorial :");
    scanf("%d",&number);
    
    int carry = number;
    int sum = 1;
    while (carry){
        sum = sum * carry;
        carry--;
    }
    printf("%d\n",sum);

}