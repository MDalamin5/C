#include<stdio.h>
int main()
{
    int num;
    printf("Enter Your Number: ");
    scanf("%d",&num);

    if(num%5==0 || num%11==0)
    {
        printf("Its valid Number");

    }

    else if(num%5==0 && num%11==0)
    {
        printf("Its a Valid number");
    }

    else
    {
        printf("Its Invalid Number");
    }


}
