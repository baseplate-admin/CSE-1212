#include <stdio.h>

// everything in this code is runtime based

void main(){
    char c;
    printf("Enter a Character to check vowel or consonant: ");
    scanf("%c", &c);
    
    if (c =='a' ) printf("Vowel");
    else if (c=='e') printf("Vowel");
    else if(c=='i') printf("Vowel");
    else if(c=='o')printf("Vowel");
    else if(c=='u') printf("Vowel");
    else printf("Consonant");

}