#include<stdio.h>

void swaping(int *p1, int *p2)
{
    int temp;
    temp= *p1;
   *p1 = *p2;
   *p2 = temp;

   //printf("x= %d\n",*p1);
   //printf("y= %d",*p2);
}
int main()
{
    int x=10,y=7;

    printf("Before Swaping\n");

    printf("x=%d , y= %d\n",x,y);

    swaping(&x,&y);
     printf("After Swaping x=%d , y= %d\n",x,y);
}
