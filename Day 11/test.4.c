#include<stdio.h>

int max(int n1,int n2){
    return n1>n2?n1:n2;

}

int main(){
    printf("Enter two numbers separated by whitespace: ");
    int n1,n2;
    scanf("%d %d",&n1,&n2);

    printf("Max Integer is :%d",max(n1,n2));
}
