#include<stdio.h>
int main()
{
    FILE *file;
    char ch[40];

    file=fopen("Test.txt","r");

    if(file==NULL)
    {
        printf("File Does Not Exist");

    }

    else
    {
        while(!feof(file))
        {
            fgets(ch,39,file);
            printf("%s",ch);

        }


        fclose(file);
    }

}
