#include <stdio.h>


void main(){
    int number_1,number_2;

    printf("Enter 2 numbers to check the LCM");
    scanf("%d %d",&number_1,&number_2);
    
    int max;

    if (number_1 > number_2){
        max = number_1;
    }else{
        max = number_2;
    }
    int lcm;

    while(1){
        if (max % number_1 == 0 && max % number_2 == 0){
            lcm = max;
            break;
        }
        max++;
    }
    printf("%d\n",lcm);
}