#include<stdio.h>
int main()
{
    char name[30];
    FILE *file;

   file = fopen("Test.txt","a");
   if(file==NULL)
    printf("File Does Not Exiest");
   else
   {
       printf("File Is Exist\n");
       printf("Enter Your University Name: ");
       gets(name);
       fputs(name,file);
       fputs("\n",file);
       printf("File is written successfully\n");
       fclose(file);
   }
   getch();

}
