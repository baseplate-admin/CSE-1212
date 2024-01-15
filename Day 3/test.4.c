#include <stdio.h>

// everything in this code is runtime based

void main(){
    char c;
    printf("Enter a Character to check number, digit or special value: ");
    scanf("%c", &c);
    
    if ((c>= 'a' && c<='z') || (c>= 'A' && c<='Z')){
        printf("Is alphabet\n");
    }
    else if (c >= '0' && c<= '9'){
        printf("Is number\n");
    }else{
        printf("Is special value\n");
    }

}