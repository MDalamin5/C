#include<stdio.h>
int main()
{
    int a,b;
   printf("Enter two number for Sum: ") ;
   scanf("%d %d",&a,&b);
   printf("Your Sum: %d\n",sum(a,b));
   int c,d;
   printf("Enter anothe number: ");
    scanf("%d %d",&c,&d);

   printf("Your Sub: %d\n",sub(c,d));

   printf("Exclucive sum: %d\n",sum(6,4));
}

int sum(int a, int b)
{
    return a+b;
}

int sub(int num1, int num2)
{
    return num1-num2;
}
