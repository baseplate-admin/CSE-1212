#include<stdio.h>

double cal(double n1,double n2,double n3){
    double res;

    if (n1<n2 && n1<n3){
        res = n1;
    }else if (n2<n3 && n2<n1){
        res = n2;
    }else{
        res = n3;
    }
    return res;
}

int main(){
    printf("Enter 3 numbers separated by whitespace: ");
    double n1,n2,n3;
    scanf("%lf %lf %lf",&n1,&n2,&n3);
    printf("Smallest number is :%d",(int)cal(n1,n2,n3));
}

