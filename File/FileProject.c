#include<stdio.h>
int main()
{
    char name[40];
    int age,phn,i,n;
    FILE *file;
    file= fopen("Student.txt","a");

    if(file==NULL)
    {
        printf("File Does NOt Exist");

    }

    else
    {
        printf("File is Open\n");

        printf("Enter the NO of Sutudent: ");
        scanf("%d",&n);
        for(i=1;i<=n;i++)
        {
            printf("Enter the Sutden first name: ");
            scanf(" %[^\n]s",name);
            printf("Enter the Student age: ");
            scanf("%d",&age);
            printf("Enter the Student Phone NO.: ");
            scanf("%d",&phn);

            fprintf(file,"\n%s\t\t%d\t\t%d\n",name,age,phn);

            printf("\nThanks for The Informations");

        }
        fclose(file);

    }
}
