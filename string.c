#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    char ch;
    char s1[10];
    char s2[90];

    printf(" Enter character C\n");
    scanf(" %c",&ch);
    printf(" Enter the string Languge");
    gets(s1);
    printf(" Enter Welcome To C!!");
    gets(s2);
    printf(" %c\n",ch);
    printf(" %s\n",s1);
    printf(" %s",s2);


    return 0;
}
