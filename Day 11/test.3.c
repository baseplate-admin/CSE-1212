#include<stdio.h>

int div(int n1,int n2){
    return n1/n2;

}

int main(){
    printf("Enter two numbers separated by whitespace: ");
    int n1,n2;
    scanf("%d %d",&n1,&n2);

    printf("Division is :%d",div(n1,n2));
}
