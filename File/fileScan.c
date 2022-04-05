#include<stdio.h>
int main()
{
    char name[50];

    FILE *file;

    file= fopen("Test.txt","r");

    if(file==NULL)
    {
        printf("File Does not exist");

    }
    else
    {
        printf("File is successfully Open\n");
        fscanf(file,"%s",&name);
        printf("%s",name);
        fclose(file);
    }
}
