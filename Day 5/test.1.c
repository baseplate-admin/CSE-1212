#include <stdio.h>

void main(){
    int number;
    printf("Enter a number to check factorial :");
    scanf("%d",&number);
    

    int sum = 1;
    for (int carry=number;carry>0;carry--){
        sum = sum * carry;
    }
    printf("%d\n",sum);

}
