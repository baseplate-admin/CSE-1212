#include <stdio.h>

int main(){
    char a[10] ;

    gets(a);

    for(int i=0;i<strlen(a);i++){
        printf("%d ",a[i]);
    }
}


