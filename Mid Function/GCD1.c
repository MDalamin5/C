#include<stdio.h>
int main()
{
    int num1,num2, gcd;

    printf("Enter two number: ");
    scanf("%d %d",&num1,&num2);

    int coun=1,small;
    small= num1<num2 ? num1:num2;

    while(coun<=small)
    {
        if (num1%coun== 0 && num2%coun==0)
        {
            gcd=coun;
        }

        coun++;

    }

    printf("%d",gcd);



}
