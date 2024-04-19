#include<stdio.h>

int area(int n1,int n2){
    return  n1*n2;

}

int main(){
    printf("Enter length and width separated by whitespace: ");
    int n1,n2;
    scanf("%d %d",&n1,&n2);

    printf("Area is :%d",area(n1,n2));
}
