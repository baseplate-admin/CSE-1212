#include <stdio.h>

int main(){
    int a[]={2,3,1,5,4};
    int n =5 ;
    for (int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            if (a[i] > a[j]){
                int x,y;
                x=a[i];
                y=a[j];
                a[i]=y;
                a[j]=x;
            }
        }
    }
    for(int i =0;i<n;i++){
        printf("%d ",a[i]);

    }
}
