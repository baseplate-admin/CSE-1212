#include <stdio.h>

void main(){
    printf("This program checks the number of a student\n");
    int number;
    printf("Enter number of a student: ");
    scanf("%d",&number);

    if (number < 40){
        printf("Fail\n");
    }else if (number >= 40 && number <50){
        printf("Third\n");

    }else if (number >= 50 && number <60){
        printf("Second\n");
    }else{
        printf("First\n");
    }
}