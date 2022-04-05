#include<stdio.h>
int main()
{
    char ch;

    printf("\tMango\n");
    printf("\tApple\n");
    printf("\tBanana\n");
    printf("\tCherry\n");
    printf("\nEnter the first letter of the any following fruits name: ");
    scanf("%c",&ch);

    switch(ch)
    {
    case 'M':
    case 'm':
        printf("Tk.500/kg");
        break;

    case 'A':
    case 'a':
        printf("Tk.250/kg");
        break;

    case 'B':
    case 'b':
        printf("Tk.130/kg");
        break;

    case 'C':
    case 'c':
        printf("Tk.270/kg");
        break;

    }

    getch();


}

