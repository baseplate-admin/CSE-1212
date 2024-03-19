#include <stdio.h>
# include <string.h>
int main(){
    char a[100];

    gets(a);

    int carry = 0;
    while(carry<= strlen(a)){
        char x = a[carry];
        if (carry == 0) {
            printf("%c",toupper(x));
        }
        if (x==' '){
            printf("%c", toupper(a[carry+1]));
        }

        carry++;

    }



}


