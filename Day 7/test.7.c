#include <stdio.h>


int main(){
    int n;
    scanf("%d",&n);
    int sum = 0;
    for(int i =2;i<=n;i=i+3){
        sum = sum+i;
    }
    printf("%d",sum);

}
