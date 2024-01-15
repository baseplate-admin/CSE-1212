#include <stdio.h>


// everything in this code is runtime based

void main(){
    int n;
    printf("Enter a number to check 'Even' or 'Odd': \n");
    scanf("%d", &n);
    if (n%2 == 0){
        printf("Even\n");
    }else{
        printf("Odd\n");
    }
}
