#include <stdio.h>

int main(){

    int n = 5;

    for (int i=0;i<=n;i++){
        for (int j=n;j>=0;j--){
            if (j<(n-i)){
                printf("*");
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }


}

