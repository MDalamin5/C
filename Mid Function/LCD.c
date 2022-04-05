#include<stdio.h>
int main()
{
    int num1,num2,lcm, fact=1;

    printf("Enter two integer: ");
    scanf("%d %d",&num1,&num2);

    lcm= (num1>num2) ? num1: num2;

    while(fact)
    {
        if(lcm%num1==0 && lcm%num2==0)
        {
            printf("LCm is %d",lcm);
            fact=0;
        }
        lcm++;
    }
}
