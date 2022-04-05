#include<stdio.h>
int main()
{
    int num1,num2,sum,product,difference,quotient,reminder;
    printf("Enter Two Number: ");
    scanf("%d %d",&num1,&num2);

    sum=num1+num2;
    product= num1*num2;
    difference=num1-num2;
    quotient=num1/num2;
    reminder=num1%num2;

    printf("The Sum is: %d\n",sum);
    printf("The Product is: %d\n",product);
    printf("The Difference is: %d\n",difference);
    printf("The Quotient is: %d\n",quotient);
    printf("The Reminder is: %d\n",reminder);

    return 0;

}
