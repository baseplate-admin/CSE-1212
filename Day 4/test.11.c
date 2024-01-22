#include <stdio.h>

void main(){
    int sum=0;
    int no_taken=1;

    while (no_taken<=3){
        int ask;
        printf("Enter Number %d : ",no_taken);
        scanf("%d",&ask);
        sum = sum+ask;
        no_taken++;
    }

    printf("Sum is : %d\n",sum);
}