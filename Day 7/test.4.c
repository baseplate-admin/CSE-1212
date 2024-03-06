#include <stdio.h>

int main(){
    int chance = 3;
    int sum = 0;

    for(int i =0;i < chance;i++){
        int d;
        scanf("%d",&d);
        sum+= d;
    }
    printf("%d",sum);
}
