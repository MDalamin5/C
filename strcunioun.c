#include<stdio.h>

union test{
    int x,y;

 };

 int main()
 {
     union test  t1;

     t1.x=10;

     printf("T1x= %d\n",t1.x);
     printf("T1y= %d\n",t1.y);

        t1.y=15;

        printf("T1x= %d\n",t1.x);
     printf("T1y= %d",t1.y);
 }
