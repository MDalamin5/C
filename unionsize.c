    #include<stdio.h>

    union test1{
        int x,y;
        char name[34];

    };
    union test2{
        int x,y;
        char name[34];

    };
     union test3{
        int x,y;
        char name[34];

    };

    struct person{
    float salary;
    };

    int main()
    {
        union test1 t1;
        union test2 t2;
        union test3 t3;
        struct person t4;


        printf("Test 1 size is: %d\n",sizeof(t1));
        printf("Test 2 size is: %d\n",sizeof(t2));
        printf("Test 3 size is: %d\n",sizeof(t3));
        printf("Test 4 size is: %d\n",sizeof(t4));
    }

