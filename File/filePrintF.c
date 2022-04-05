#include<stdio.h>
int main()
{
    FILE *file;
    char name[30];
    int age;

    file=fopen("Test.txt","a");
    if (file==NULL)
    {
        printf("File Does Not Exist");

    }

    else
    {
        printf("FIle is Successfully Open\n");
        printf("Entery YOur full name: ");
        gets(name);
        printf("Enter Your age: ");
        scanf("%d",&age);
        fprintf(file,"Name: %s, Age: %d\n",name,age);
        printf("File Written Successfully");
        fclose(file);

    }
}
