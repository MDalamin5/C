
#include<stdio.h>
int main()
{
    char ch;
    int lower;
    printf("Enter uppercase Letter: ");
    scanf("%c",&ch);

    lower= ch+32;

    printf(" The Lower letter is: %c",lower);
}
