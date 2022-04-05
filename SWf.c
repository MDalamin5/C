#include<stdio.h>
int main()
{
    char s[]="MdAlAmin";

    int i=0,len=0;
    while(s[i]!='\0')
    {
        i++;
        len++;
    }
    printf("The LEngth Is: %d",len);
}
