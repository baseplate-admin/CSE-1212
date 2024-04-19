#include<stdio.h>

int min(int n1,int n2){
    return n1<n2?n1:n2;

}

int main(){
    printf("Enter two numbers separated by whitespace: ");
    int n1,n2;
    scanf("%d %d",&n1,&n2);

    printf("Min Integer is :%d",min(n1,n2));
}
