#include <stdio.h>
#include <math.h>


void main(){
    /// Quadritic equation = ax^2 + bx + c

    double a ,b ,c;
    double root_1,root_2;
    printf("This program finds the value of quadratic equations\n");
    printf("Enter the value of a,b,c seperated by whitespace. Eg: 1 1 0\n");
    scanf("%lf %lf %lf",&a,&b,&c);

    int b_square = pow(b,2);

    root_1 = ((-b + sqrt(b_square-(4*a*c)))/2*a);
    root_2 = ((-b - sqrt(b_square-(4*a*c)))/2*a);

    printf("Root 1: %lf | Root 2: %lf\n",root_1, root_2);
}