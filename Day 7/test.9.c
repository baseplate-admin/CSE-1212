#include <stdio.h>
#include <math.h>

int main(){
    int sum = 0;
    for(int i =1;i<=8;i++){
        int d = pow(2,i);
        printf("%d",d);
        if (i!= 8) printf(",");
    }

}
