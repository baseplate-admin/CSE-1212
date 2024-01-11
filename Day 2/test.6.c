#include <stdio.h>


void main(){
    int a,b;
    printf("Enter 2 variables seperated by whitespace. Eg : 1 2\n");
    scanf("%d %d",&a,&b);
    int sum = a - b;

    printf("%d\n",sum);
}
