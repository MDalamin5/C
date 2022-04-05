#include<stdio.h>
int checkp(int n1,int n2)
{
    int i, flag, j;
    for(i=n1; i<=n2; i++)
    {
        flag=0;
        for(j=2; j<=i/2; j++)
        {
            if(i%j==0)
                flag=1;
        }

        if(flag==0)
        {
            printf("%d is prime nember\n",i);
        }
    }


}

int main()
{
    int num1,num2,result;
    printf("Enter YOur number: ");
    scanf("%d%d",&num1,&num2);

    checkp(num1,num2);

    printf("Hi\n");




}
