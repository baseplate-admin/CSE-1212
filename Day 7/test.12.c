#include <stdio.h>


int main(){
    int n;
    scanf("%d",&n);

    for(int j =1;j<=n;j++){
        printf("(");
        for(int i =1;i<=j;i++){
            printf("%d",i);
            if ( i != j){
                printf("+");
            }
        }
        printf(")");
        if(j!= n) printf("+");
    }

}
