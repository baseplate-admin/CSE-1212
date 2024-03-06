#include <stdio.h>


int main(){
    int n;
    scanf("%d",&n);
    double sum = 0;
    for(double i =1.2;i<=n;i=i+1.1){
        sum = sum+i;
    }
    printf("%lf",sum);

}

