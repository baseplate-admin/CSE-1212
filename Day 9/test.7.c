#include <stdio.h>

int main(){
    char a[10] ;
    char b[10] ;

    gets(a);
    gets(b);

    strcpy(a,b);

    printf("%s",a);

}


