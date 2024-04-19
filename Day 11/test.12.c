#include <stdio.h>


int rec(int n ){
    int j=0;
    while(n){
        j+= n%10;
        n/=10;
    }
    if (j>=10){
        return rec(j);
    }
    else{
        return j;
    }

}


int main(){
    int n;
    printf("Enter number to check  for digital root:");
    scanf("%d",&n);
    printf("Digital Root is:%d",rec(n));
}

