#include <stdio.h>

int main(){
    char s[100];
    gets(s);
    int i;
    for(i=0;i<strlen(s);i++){
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
    s[i]='\0';
    int count=0;
    for (int j=0;j<strlen(s);j++){
        if (s[j] != s[j+1]){
            count++;
        }

        printf("%c",s[j]);

    }

    printf("%d",count);


}
