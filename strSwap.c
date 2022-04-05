#include<stdio.h>
int main()
{
    char s1[10]="Hello";
    char s2[20]="Oi ke Hoisa";
    char temp[23];

    strcpy(temp,s1);
    strcpy(s1,s2);
    strcpy(s2,temp);

    printf("s1= %s\n",s1);
    printf("s2= %s\n",s2);

    return 0;

}
