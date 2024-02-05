#include <stdio.h>


void main(){
    int base,pow;

    scanf("%d %d",&base,&pow);
    

    int sum = 1;
    for(int i =0;i<pow;i++){
        sum = sum*base;
    }
    printf("%d\n",sum);

}