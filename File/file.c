#include<stdio.h>
int main()
{
    FILE *file;
    file=fopen("Test.txt","w");

    if(file==NULL)
    {
        printf("File doesn't Exest");

    }
    else
    {
        printf("File is exist");
        fclose(file);
    }

}
