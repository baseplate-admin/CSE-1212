#include <stdio.h>

void main(){
    int number;
    printf("Enter a number to check if positive or negative: ");

    scanf("%d", &number);

    if (number > 0) {
        printf("Positive\n");
    }
    else {
        printf("Negative\n");
    }
}