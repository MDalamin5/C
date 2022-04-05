#include<stdio.h>
int main()
{
    char ch;
    FILE *file;

    file=fopen("Test.txt","r");

    if(file==NULL)
    {
        printf("File Does not Exist");

    }

    else
    {
        printf("FIle Open Successfully");
        while(!feof(file))
        {
          ch= getc(file)  ;
          printf("%c",ch);
        }
        fclose(file);
    }
}
