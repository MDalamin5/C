#include<stdio.h>
void sum()
{
    int a, b,sum;
    printf("Enter Your Two Number: ");
    scanf("%d %d",&a,&b);
    sum=a+b;
    printf("Your Sum: %d\n",sum);
}
void sub()
{
    int a, b, sup;
    printf("Enter To long Interger: ");
    scanf("%d %d",&a,&b);
    sup=a-b;
    printf("The subtraction is: %d\n",sup);
}


int main()
{
    sum();
    printf("Hello World!\n");
    sum();
    sub();
    sub();
    sum();
}
