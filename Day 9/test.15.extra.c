#include <stdio.h>
#include <string.h>

int main(){
    int n;
    printf("Enter decimal number: ");
    scanf("%d",&n);
    char hex[100];

    int temp;
    int i=1;
    while(n){
        temp = n%16;
        if(temp<10){
            temp = temp + '0';
        }else{
            temp = temp+ 'A' - 10;

        }
        hex[i++] = temp;
        n = n/16;
    }
    printf("Hex is: ");
    for (int j =i;j>0;j--){
        printf("%c", hex[j]);
    }
    printf("\n");
    return 0;
}
