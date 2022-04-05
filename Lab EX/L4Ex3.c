#include<stdio.h>
int main()
{
    int num;
    printf("Enter your number: ");
    scanf("%d",&num);

    if(num%2!=0 && num%5==0)
    {
        printf("Its a Valid Number");

    }

    else if(num%2==0 && num%5!=0)
    {
        printf("Its a Valid Number");
    }

    else
        printf("Invalid number");

        return 0;
}
