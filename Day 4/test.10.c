#include <stdio.h>

void main(){
    int sum=0;
    int num=1;
    while (num <11){
        sum = sum + num; 
        num++;
    }
    printf("%d\n",sum);
}