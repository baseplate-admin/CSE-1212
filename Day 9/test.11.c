#include <stdio.h>

int main(){
    char a[100];

    gets(a);

    int vowels=0;
    int digits=0;
    int consonants=0;
    int whitespace = 0;

    int carry = 0;
    while(carry!= strlen(a)){
        char x = a[carry];
        if (x == 'a'||x=='e'||x=='i'||x=='o'||x=='u'
            || x == 'A'||x=='E'||x=='I'||x=='O'||x=='U' ){
            vowels++;
        }
        else if ((x>='A' && x<='Z')||(x>='a' && x<='z')){
            consonants++;
        }

        if (x>='1' && x<='9'){
            digits++;
        }

        if (x==' '){
            whitespace++;
        }
        carry++;
    }
    printf("Digits : %d\n",digits);
    printf("Vowels : %d\n",vowels);
    printf("Consonants : %d\n",consonants);
    printf("Whitespace : %d\n",whitespace);
}


