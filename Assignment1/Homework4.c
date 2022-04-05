#include<stdio.h>
int main()
{
    int x,y,quotient1,reminder1,quotient2,reminder2;
    printf("Enter The value Of x and y : ");
    scanf("%d %d",&x,&y);

    printf("\nWhen Divide x by y then/n");

    quotient1=x/y;
    reminder1=x%y;

    printf("\nWhen Divide y by x then/n");

    quotient2=y/x;
    reminder2=y%x;


    printf("\nWhen divide x by y: \n\n");
    printf("Quotient is = %d\n",quotient1);
    printf("Remainder is = %d\n",reminder1);

    printf("\nWhen divide y by x: \n\n");
    printf("Quotient is = %d\n",quotient2);
    printf("Remainder is = %d\n",reminder2);

    return 0;

}
