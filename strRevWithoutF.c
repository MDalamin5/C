
#include<stdio.h>
int main()
{
    char name1[]="hello sir";
    char name2[25];

    int len=0, i=0,j;
    while(name1[i]!='\0')
    {
        i++;
        len++;
    }

    for(j=0,i=len-1;i>=0;i--,j++)
    {
        name2[j]=name1[i];
    }
    name2[j]='\0';

    printf("Str1= %s\n",name1);
    printf("Str2= %s\n",name2);

}
