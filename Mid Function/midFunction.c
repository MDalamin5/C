#include <stdio.h>
int main()
{
    int num1,num2,i,j,flag;

    printf("Enter Your two integer number: ");
    scanf("%d%d",&num1,&num2);

    for(i=num1; i<=num2; i++)
    {
        flag=0;

        for(j=2; j<=i/2; j++)
        {
            if(i%j==0)
           {
               flag=1;
           }
        }

        if (flag==0)
            printf("prime number: %d\n",i);
    }
}
