#include <stdio.h>

int main()
{

    int n;
    printf("Enter hexadecimal number: ");
    scanf("%x",&n);

    int i=0;
    int oct[100];

    while(n != 0) {
        oct[i] = n%8;
        n=n/8;
        i++;
    }

    printf("Octal is: ");
    for (int j =i-1;j>=0;j--){
        printf("%d", oct[j]);
    }
    return 0;
}

