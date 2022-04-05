#include<stdio.h>
int main()
{
    int m,n,sv1,sv2;
    printf("Enter Two integer value: ");
    scanf("%d%d",&m,&n);
    sv1=m*pow(2,n);
    sv2=m/pow(2,n);
    printf("The m<<n value is: %d\n",m<<n);
    printf("The short solution is: %d\n",sv1);

    printf("The m>>n value is: %d\n",m>>n);
    printf("The short solution is: %d",sv2);
    return 0;

}
