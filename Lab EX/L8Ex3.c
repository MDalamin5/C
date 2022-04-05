#include<stdio.h>

int fact(int n)
{
    int i,fac=1;
    for(i=1; i<=n;i++)
    {
        fac=fac*i;
    }
    return fac;
}

int main()
{
    int n,i,superFact=1;
    printf("Enter The value of n: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
       // fact(i);
        superFact=superFact*fact(i);
    }

    printf("The Super-Factorial is = %d",superFact);



}
