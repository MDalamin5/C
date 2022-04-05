#include<stdio.h>

void tothepower(double a,double b)
{
    double i=1,result=1;
    for(i=1;i<=b;i++)
    {
       result=result*a;
    }
    printf("%.2lf",result);

}

int main()
{
    double base,exp;
    printf("Enter Base: ");
    scanf("%lf",&base);
    printf("Enter Exp: ");
    scanf("%lf",&exp);

    tothepower(base,exp);

}

