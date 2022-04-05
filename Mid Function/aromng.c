#include<stdio.h>
int main()
{
    int i,sum=0,num,rem,temp;
    printf("Enter your number: ");
    scanf("%d",&num);

    temp=num;


        for(i=1; i<=3; i++)
        {
            rem=num%10;
            sum=sum+ rem*rem*rem;
             num=num/10;
        }


    if(temp==sum)
        printf("Its a aromng num.");

    else
        printf("its not a a.n");

        int flag=0;

    for(i=2;i<temp; i++)
    {
        if(temp%i==0)
       {
            flag=1;
       }
    }
    if(flag==0)
        printf("\nIts a Prime num.");


        else
        {
            printf("\nIts not a prime number");
        }


}
