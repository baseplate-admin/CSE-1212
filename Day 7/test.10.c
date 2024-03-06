#include <stdio.h>
#include <math.h>

int main(){
    int n = 40;

    for (int i =1;i<=n;i=i+3){
        int d;
        if ( i % 2 ==0){
            d = -i;
        }else{
            d = i;
        }
        printf("%d",d);
        if(i!=n) printf(",");
    }

}
