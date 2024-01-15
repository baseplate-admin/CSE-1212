#include <stdio.h>

// everything in this code is runtime based

void main(){
    char c;
    printf("Enter a Character to check vowel or consonant: ");
    scanf("%c", &c);
    
    if (c =='a'||c=='e'||c=='i'||c=='o'||c=='u' ) printf("Vowel");
    else printf("Consonant");

}