#include<stdio.h>
int main()
{
    int a=7,b=3;

      a=a-b;
      b=a+b;
      a=b-a;

      printf("a=%d, b=%d\n",a,b);

      printf("a= %d\n",a);
      printf("b= %d",b);

      printf("\a");

      getch();
}
