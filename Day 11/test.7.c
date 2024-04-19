#include<stdio.h>
#include<math.h>

double area(double n1){
    return  3.141592653589793238462643383279502884197*pow(n1,2);

}

int main(){
    printf("Enter radius of a circle: ");
    double n1;
    scanf("%lf",&n1);

    printf("Area is :%.2lf",area(n1));
}

