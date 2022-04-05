#include<stdio.h>
int main()
{
    int result=fact(11);
    printf("%d",result);
}

    int fact(n)
    {
        if(n==1)
            return 1;

        else
           return n*fact(n-1);
    }
