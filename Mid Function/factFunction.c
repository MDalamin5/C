#include<stdio.h>
int factf(int n)
{
    int i, fact=1;
    for(i=1; i<=n; i++)
    {
        fact=fact*i;

    }
    return fact;
}

int main()
{
    int num,result;
    printf("Enter YOur Number: ");
    scanf("%d",&num);
    result=factf(num);

    printf("%d",result);
}
