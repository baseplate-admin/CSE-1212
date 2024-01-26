#include <stdio.h>


void main(){
    int year ;

    printf("Enter year to check if a year is leap year :");
    scanf("%d",&year);

    if((year%4==0) && ((year%400==0) || (year%100!=0))){
        printf("Leap Year\n");
    }else{
        printf("Not leap year\n");
        

        int positive_distance=0,negative_distance =0;

        if(((year+1)%4==0) && (((year+1)%400==0) || ((year+1)%100!=0))) {
            positive_distance = 1;
        }
        else if(((year+2)%4==0) && (((year+2)%400==0) || ((year+2)%100!=0))) {
            positive_distance = 2;
        }
        else if(((year+3)%4==0) && (((year+3)%400==0) || ((year+3)%100!=0))) {
            positive_distance = 3;
        }
        else if(((year+4)%4==0) && (((year+4)%400==0) || ((year+4)%100!=0))) {
            positive_distance = 4;
        }



        if(((year-1)%4==0) && (((year-1)%400==0) || ((year-1)%100!=0))) {
            negative_distance =1;
        }
        else if(((year-2)%4==0) && (((year-2)%400==0) || ((year-2)%100!=0))) {
            negative_distance=2;

        }
        else if(((year-3)%4==0) && (((year-3)%400==0) || ((year-3)%100!=0))) {
            negative_distance = 3;
        
        }
        else if(((year-4)%4==0) && (((year-4)%400==0) || ((year-4)%100!=0))) {
            negative_distance = 4;
        }

        if (positive_distance < negative_distance) printf("Nearest Leap year: %d",year + positive_distance);
        else if (positive_distance > negative_distance) printf("Nearest Leap year: %d", year - negative_distance);
        else printf("Nearest leap year is either %d ( from positive side ) or %d ( from negative side )",(year+positive_distance),(year-negative_distance));
        printf("\n");
    }


    
}
//1600 | 2004 | 2000