

#include <stdio.h>

int main(){
    int n=80;

    char arr[n];
    int i=0;

    while(1){
        if(i>n) break;

        char x;
        scanf("%c",&x);
        if(x=='y'||x=='n'){
            continue;
        }
        if(x=='x'){
            break;
        }
        arr[i] = x;
        i++;

    }

    for(int j=0;j<i;j++){
        printf("%c",arr[j]);
    }
}

