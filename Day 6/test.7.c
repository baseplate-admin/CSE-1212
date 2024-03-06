#include <stdio.h>

void main(){
    int start=3,end=100000000;


    int first_num = 0,second_num = 1;

    if (first_num >= start) printf("%d ", first_num);
    if (second_num >= start) printf("%d ", second_num);

    for(int i = start;i<=end;i = first_num + second_num){
        if (i >= start){
            printf("%d ",i);
        }
        first_num = second_num;
        second_num = i;        
    }
    printf("\n");

}