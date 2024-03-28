#include<stdio.h>


int pass(char s[]){
    printf("%s",strrev(s));
}


int main(){
    char s[100];
    gets(s);
    pass(s);
}
