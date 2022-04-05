
#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,c,root1,root2,realPart,imagPart,discriminant;
    printf("Enter equation coefficients a, b, and c: ");
    scanf("%lf %lf %lf",&a,&b,&c);

    discriminant= b*b - 4*a*c;

    if(discriminant>0)
    {
        root1=(-b + sqrt(discriminant))/2*a;
        root2=(-b - sqrt(discriminant))/2*a;

        printf("root1 = %.2lf and root2= %.2lf",root1,root2);
    }

    else if(discriminant==0)
    {
        root1= -b/(2*a);
        root2= -b/(2*a);
         printf("root1 = root2 = %.2lf;", root1);
    }

    else
    {
       realPart= -b/(2*a) ;
       imagPart= sqrt(-discriminant)/(2*a);
       root1=realPart+imagPart;
       root2=realPart-imagPart;

       printf("root1 = %.2lfi and ",root1);
       printf("root2 = %.2lfi",root2);
    }

    return 0;


}
