#include <stdio.h>
#include <math.h>
void main (){
    printf("This program checks if a number is even or odd.\n");
    printf("If a number is even it prints the square of the number\n");
    printf("else prints the cube of that number\n");
    int number;
    printf("Enter a number : ");
    scanf("%d",&number);


    if (number % 2 == 0 ){
        // is even
        int v;
        v=pow(number,2);
        printf("%d\n", v);
    }else{
        int v2;
        v2=pow(number,3);
        printf("%d\n", v2);
    }
}