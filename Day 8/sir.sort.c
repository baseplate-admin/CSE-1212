#include <stdio.h>


int main(){
    int a[] = {5,4,3,2,1};

    for (int j=0;j<4;j++){
        for (int i=0;i<4;i++){
            if (a[i]>a[i+1]){
                int temp = a[i];
                a[i] = a[i+1];
                a[i+1] = temp;
            }
        }
    }
    for(int i=0;i<5;i++){
        printf("%d ",a[i]);
    }
}
