#include<stdio.h>
int arm_check();
int main()
{
    int i,num;
    printf("enter your number: ");
    scanf("%d",&num);
   int result= arm_check(num);
   if (num==result)
    printf("Its arm.");
   else
    printf("Its not arm");
}

int arm_check(int n)
{
    int rem,sum=0,i;

    for(i=1; i<4; i++)
    {
        rem=n%10;
        sum=sum+rem*rem*rem;
        n=n/10;
    }

    return sum;
}
