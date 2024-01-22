#include <stdio.h>

// 4

void main(){
    int year ;

    printf("Enter year to check if a year is leap year :");
    scanf("%d",&year);
    int carry_year = year;

    if((year%4==0) && ((year%400==0) || (year%100!=0))){
        printf("Leap Year\n");
    }else{
        printf("Not leap year\n");
        

        int positive_distance,negative_distance ;
        while (1){
            if((carry_year%4==0) && ((carry_year%400==0) || (carry_year%100!=0))) {
                positive_distance = carry_year;
                break;
            };
            carry_year = carry_year + 1;
        }
        carry_year = year;
        while(1){
            if((carry_year%4==0) && ((carry_year%400==0) || (carry_year%100!=0))) {
                negative_distance = carry_year;
                break;
            };
            carry_year = carry_year -1 ;
        }

        if (positive_distance > negative_distance) printf("Nearest Leap year: %d\n",positive_distance);
        else printf("Nearest Leap year: %d\n",negative_distance);
    }


    
}
//1600 | 2004 | 2000