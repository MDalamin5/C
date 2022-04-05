#include<stdio.h>
int main()
{
    float fahr,cel;
    printf("Enter the temperature in celsius: ");
    scanf("%f",&cel);

    fahr=(1.8*cel)+32.0; // Temperature conversion formula

    printf("\n");

    printf("Temperature in Fahrenhit: %.3f F",fahr);

    return 0;

}
