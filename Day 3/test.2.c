#include <stdio.h>


// everything in this code is runtime based

void main(){
    int n;
    printf("Enter a number to check range: ");
    scanf("%d", &n);
    
    
    if(n>=20 && n<=30) {
        printf("Better\n");
    }
    else if (n <= 60 && n >= 50) {
        printf("Good\n");
    }
    
    else{
        printf("Best\n");
    }

}