#include <stdio.h>


void main(){

    float a,b ;
    printf("Enter 2 numbers seperated by whitespace. Eg: 1 2\n");
    scanf("%f %f",&a,&b);
    float sum = a / b;

    printf("%f\n",sum);
}