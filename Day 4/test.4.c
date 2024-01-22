#include <stdio.h>
#include <math.h>
void main (){
    int number;
    printf("Enter a number.\n");
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