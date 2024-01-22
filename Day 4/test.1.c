#include <stdio.h>

void main(){
    int number_1,number_2,number_3,largest_number;
    
    printf("Input 3 numbers seperated by whitespace. Eg: 1 2 3\n");
    scanf("%d %d %d",&number_1,&number_2,&number_3);
    if(number_1 > number_2 && number_1 > number_3){
        largest_number = number_1;
    }
    else if (number_2 > number_3 && number_2  > number_1){
        largest_number = number_2;
    }

    else if (number_3 > number_1 && number_3 > number_1){
        largest_number = number_3;
    }

    printf("Largest number is : %d\n", largest_number);
}