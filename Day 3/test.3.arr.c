#include <stdio.h>


void main(){
    char c;
    printf("Enter a Character to check vowel or consonant: ");
    scanf("%c", &c);
    
    char vowel[] = {'a','e','i','o','u'};
    int i;
    for (i=0; i<sizeof(vowel);i++){
        if (vowel[i] == c){
            printf("Vowel");
            return;
        }
    }
    printf("Consonant");
    return;


}