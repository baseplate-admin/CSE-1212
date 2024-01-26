#include <stdio.h>

void main(){
   int sum,start=1;
    int range;
    printf("Enter number range to check :");
    scanf("%d",&range);

    while (start <=range){
        printf("%d",start);

        if(start != range) {
            printf("+");
            
        }
        sum = sum + start;
        start++;
    }

    printf("\nSum is : %d\n",sum);
}