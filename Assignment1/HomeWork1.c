#include<stdio.h>
#include<math.h>
int main()
{
    float x,value;
    printf("Enter the Value of x= ");
    scanf("%f",&x);
    value=5*pow(x,3)-4*pow(x,2)+sqrt(x)+3;

    printf("The Valu is: %.2f",value);

    return 0;

}
