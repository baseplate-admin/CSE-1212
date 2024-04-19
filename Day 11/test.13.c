#include <stdio.h>


int rec(int n ){
    int j=0;
    while(n){
        j=j*10+n%10;
        n/=10;
    }
    return j;

}


int main(){
    int n;
    printf("Enter number reverse:");
    scanf("%d",&n);
    printf("Reversed number is:%d",rec(n));
}

