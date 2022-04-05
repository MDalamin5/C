#include<stdio.h>
int main()
{
    char name[70]="Hello Sir ";
    char name1[]="How's Everthings";

    int i=0,len=0,j=0;

    while(name[i]!='\0')
    {
        i++;
        len++;
    }


    while(name1[j]!='\0')
    {
        name[len+j]=name1[j];
        j++;
    }
    printf("%s",name);
}
