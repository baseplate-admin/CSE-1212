#include <stdio.h>

int main(){
    char s[100]={'a','z','j','\0'};

    for(int i=0;i<strlen(s);i++){
        for(int j=0;j<i;j++){
            char a = s[i];
            char b = s[j];
            if (a<b){
                char x;
                char y;
                x=a;
                y=b;
                s[i] = y;
                s[j] = x;
            }
        }

    }

    printf("%s",s);


}
