#include <stdio.h>

int main(){
    char a[100];
    gets(a);

    char b[strlen(a)];

    int carry = 0;
    int b_for_carry=0;
    while(carry!= strlen(a)){
        char x = a[carry];
        if ((x >='A' && x<='Z')
            ||(x>='a' && x<='z')){
            b[b_for_carry] = x;
            b_for_carry++;
        }
        carry++;
    }
    b[b_for_carry+1] = '\0';
    printf("%s",b);
}


