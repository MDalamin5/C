#include<stdio.h>
int main()
{

    int num1,num2,num3;

    float avg;

    printf("Enter Three Int. NUmber: ");

    scanf("%d %d %d",&num1,&num2,&num3);

    avg=(num1+num2+num3)/3.0;

    printf("The average is: %.2f",avg);

}
