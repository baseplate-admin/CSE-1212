#include <stdio.h>

int main(){
    int sum=1;

    int n;
    scanf("%d",&n);

    while(n){
        sum *= n;
        n--;
    }

    printf("%d",sum);

}
