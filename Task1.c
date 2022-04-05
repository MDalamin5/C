#include<stdio.h>
int main()
{

    int num1,num2,sum,product,difference,quotient,reminder;
    printf("Enter Two Int. number: ");
    scanf("%d %d",&num1,&num2);

    sum=num1+num2;
    product=num1*num2;
    difference=num1-num2;
    quotient=num1/num2;
    reminder=num1%num2;

    printf("Sum = %d\n",sum);
    printf("Product = %d\n",product);
    printf("Difference = %d\n",difference);
    printf("Quotient = %d\n",quotient);
    printf("Reminder = %d\n",reminder);

}
