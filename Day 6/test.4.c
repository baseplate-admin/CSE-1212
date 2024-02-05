#include <stdio.h>


void main(){
    int n, largest = 0;
    
    printf("Enter the number of use cases :");
    scanf("%d",&n);
    printf("\n");

    while(n){
        int x;
        scanf("%d",&x);
        if(largest < x){
            largest = x;
        }
        n--;
    }
    printf("%d", largest);
    printf("\n");
}