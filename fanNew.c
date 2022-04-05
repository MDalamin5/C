#include<stdio.h>
int main()
{
    int a[]={20,30,40,52,1};
    array( a);
}

void array(int x[])
{
    int i;
    for(i=0; i<5;i++)
    {
        printf("%d\n",x[i]);
    }
}
