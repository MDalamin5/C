#include<stdio.h>
#include<math.h>
int main()
{
    float edge,height,diameter,volume1,volume2;
    float const PI = 3.142;

    printf("Enter the value of Cube Edge: ");
    scanf("%f",&edge);
    volume1=pow(edge,3);

    printf("Enter the value of Cylinder Height and Diameter: ");
    scanf("%f %f",&height,&diameter);
    volume2=PI*diameter*diameter*height;

    printf("Vloume of Cube = %.2f\n",volume1);
    printf("Vloume of Cylinder = %.2f",volume2);

    return 0;

}
