#include<stdio.h>
int main()
{
    int num, temp1, temp2, sum=0,i;

    printf("entre the last degit of febonnic serise: ");
    scanf("%d",&num);

    for(i=1; i<=num; i++)
    {
        temp1=0;
        temp2=1;
        sum=sum+temp2;
        temp2=sum;

        printf("\t%d",sum);

    }
}
