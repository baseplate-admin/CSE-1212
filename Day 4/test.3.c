#include <stdio.h>

void main(){
    printf("This program checks if a number is positive or negative\n");
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