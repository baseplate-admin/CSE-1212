#include <stdio.h>

#include <ctype.h>
// everything in this code is runtime based

void main(){
    char c;
    printf("Enter a Character to check vowel or consonant: ");
    scanf("%c", &c);
    
    if (tolower(c) =='a'||tolower(c)=='e'||tolower(c)=='i'||tolower(c)=='o'||tolower(c)=='u') printf("Vowel");
    else printf("Consonant");

}