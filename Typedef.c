#include<stdio.h>

    struct book
    {
        char name[20];
        int price;
    };

int main()
{


    typedef struct book Boi;

    Boi b = {"How to know",450};

    printf("Book NAme = %s\n",b.name);
    printf("Book NAme = %d\n",b.price);

}

