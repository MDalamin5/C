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
    int n;
    float value;
    printf("Enter Your number: ");
    scanf("%d",&n);

   fact(2*n);
   fact(n);
    value= (float) fact(2*n)/fact(n);

    printf("%.2f",value);

}
