#include <stdio.h>

void main(){
    float a,b;
    printf("Enter 2 floating point numbers seperated by whitespace. Eg: 1.0002 1.52\n");
    scanf("%f %f",&a,&b);

    printf("%f\n",a*b);
}