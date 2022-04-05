#include<stdio.h>
int main()
{
    int a[5]={20,30,34,44,4};
    int i;

    int *ptr;
    ptr=&a[0];

    for(i=0; i<5;i++)
    {
        printf("%d\n",*ptr);
        ptr++;

    }
    printf("\n");
}

