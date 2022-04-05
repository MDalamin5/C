#include<stdio.h>
int main()
{
    int x,y,sum;
    printf("Enter Two Value: ");
    scanf("%d%d",&x,&y);
    int *ptr1;
    int *ptr2;

    ptr1=&x;
    ptr2=&y;

    sum= *ptr1+*ptr2;

    printf("Sum = %d",sum);

}
