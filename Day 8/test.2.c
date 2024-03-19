#include <stdio.h>

int main(){
    int n=10;

    int arr[n];
    for(int i =0;i<n;i++){
        int x;
        scanf("%d",&x);
        arr[i] = x;
    }

    int sum=0;
    for(int i =0;i<n;i++){
        sum+= arr[i];
    }
    printf("Sum is: %d",sum);
}
