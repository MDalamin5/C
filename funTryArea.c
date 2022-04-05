#include<stdio.h>
double tryarea(double num1,double num2);
int main()
{
   double a,b,result;
   printf("Enter base and hight: ");
   scanf("%lf%lf",&a,&b);
    result= tryarea(a,b);
   printf("The Area is %.2lf",result);

}
 double tryarea(double num1,double num2)
{
    return 0.5*num1*num2;
}
