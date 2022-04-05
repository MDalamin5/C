#include<stdio.h>
int main()
{
    int x=5,y=10,z=6;

    int *p;

    p=&x;

    printf("%d\n",*p);
    printf("%d\n",p);

    p=&y;
    printf("%d\n",*p);
    printf("%d\n",p);

    p=&z;
    printf("%d\n",*p);
    printf("%d\n",p);

}
