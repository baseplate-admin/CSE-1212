#include <stdio.h>

void main (){

    double number_1, number_2,result;
    int choice;

    printf("This program operates on 2 numbers\n");
    printf("Enter 2 numbers seperated by whitespace\n");
    scanf("%lf %lf",&number_1,&number_2);
    
    
    printf("Enter a operation choice according to the following conditions:\n");
    printf("\tChoice\t\t\tResult\n");
    printf("\t1\t\t\tAdd\n");
    printf("\t2\t\t\tSubstract\n");
    printf("\t3\t\t\tMultiply\n");
    printf("\t4\t\t\tDivide\n");
    printf("\t5\t\t\tRemainder\n");
    scanf("%d",&choice);

    if (choice == 1) result = number_1 + number_2;
    else if (choice == 2) result = number_1 - number_2;
    else if (choice == 3) result = number_1 * number_2;
    else if (choice == 4) result = number_1 / number_2;
    else if (choice == 5)  {
        int _number_1 = number_1, _number_2= number_2;
        result = _number_1 % _number_2;
    };

    printf("Result is : %lf",result);
    printf("\n");

}