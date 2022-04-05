#include <stdio.h>
int main()
{
    int x = 3;
    printf("%d\n", 3 -2 / 4);
    printf("%f\n", 3 -2.0 / 4);
    printf("%d\n", -27 / -5 + 4 / 3);
    printf("%d\n", 16 % -5 + 7 * 6);
    printf("%d\n", -12 * 3 % 5 * -23 / +6 - 5 * 2);
    printf("%d\n", x-- * 2 + 5);
    printf("%d\n", x);
    printf("%d\n", --x * 2 + 5);
    printf("%d\n", --x);
    printf("%d\n", --x);

    printf("%d\n", 3 % 5 / (5 % 3));
    return 0;
}
