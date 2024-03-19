#include <stdio.h>

int main(){
    char a[100];

    gets(a);

    char b[strlen(a)];

    int carry = 0;
    int b_for_carry=0;
    while(carry!= strlen(a)){
        char x = a[carry];
        if (x == 'a'||x=='e'||x=='i'||x=='o'||x=='u'){
            b[b_for_carry] = x;
            b_for_carry++;
        }
        carry++;
    }

    printf("%s",b);

}


