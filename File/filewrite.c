#include<stdio.h>
int main()
{
    char name[30]=" is it working or not";
    int len= strlen(name);
    int i;
    FILE *file;

    file=fopen("Test.txt","a");


    if(file==NULL)
    {
        printf("File doesen't exist");

    }
    else
    {
        printf("File is exist\n");
        for(i=0;i<len;i++)
        {
            fputc(name[i],file);
        }
        printf("File is written successfully\n");
        fclose(file);

    }
}
