#include <stdio.h>

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
            temp = temp+48;
        }else{
            temp = temp+55;

        }
        hex[i++] = temp;
        n = n/16;
    }
    printf("Hex is: ");
    for (int j =i;j!=0;j--){
        printf("%c", hex[j]);
    }

    return 0;


}
