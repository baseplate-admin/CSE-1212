
#include <stdio.h>

int main(){
    int n=10;

    int arr[n];
    for(int i =0;i<n;i++){
        int x;
        scanf("%d",&x);
        arr[i] = x;
    }

    int minimum = arr[0];
    for(int i =0;i<n;i++){
        if(arr[i]<minimum) minimum = arr[i];
    }

    printf("Smallest number is: %d",minimum);
}

