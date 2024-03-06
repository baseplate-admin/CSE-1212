#include <stdio.h>


int main(){
    int n;
    scanf("%d",&n);
    int last = 1;
    printf("%d,",last);
    for (int i =4;last<n;i=i+2){
            last += i;
            printf("%d",last);
        if (last!=n) printf(",");
    }
}
