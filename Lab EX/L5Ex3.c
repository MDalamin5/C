#include<stdio.h>
int main()
{
    char ch;
    float num1,num2;

    printf("Enter operator: ");
    scanf(" %c",&ch);

    printf("Enter Two Number: ");
    scanf("%f %f",&num1,&num2);

    switch(ch)
    {
        case '+':

        printf("%.1f + %.1f = %.1f",num1,num2,num1+num2);
        break;

        case '-':

        printf("%.1f - %.1f = %.1f",num1,num2,num1-num2);
        break;

        case '*':

        printf("%.1f * %.1f = %.1f",num1,num2,num1*num2);
        break;

        case '/':

        printf("%.1f / %.1f = %.1f",num1,num2,num1/num2);
        break;

    }
}
