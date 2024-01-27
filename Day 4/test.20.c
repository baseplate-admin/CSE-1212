#include <stdio.h>


void main(){
    char character;
    scanf("%c",&character);

    if ((character >='a' && character <= 'z') || (character>='A' && character <= 'Z')){
        printf("Is characer");
    }
    else{
        printf("Not a character");
    }

    printf("\n");
}