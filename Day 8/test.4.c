
#include <stdio.h>

int main(){
    int n=10;

    int arr[n];
    for(int i =0;i<n;i++){
        int x;
        scanf("%d",&x);
        arr[i] = x;
    }

    int largest = arr[0];
    for(int i =0;i<n;i++){
        if(arr[i]>largest) largest = arr[i];
    }

    printf("Largest number is: %d",largest);
}
