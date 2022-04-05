#include<stdio.h>
int main()
{
    double base,exp,result=1,i;
    printf("Enter the base: ");
    scanf("%lf",&base);
    printf("Enter power: ");
    scanf("%lf",&exp);

    for(i=1;i<=exp;i++)
    {
        result=result*base;
    }
    printf("THe valu is : %.2lf",result);
}
