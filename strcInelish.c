#include<stdio.h>
struct person{
    int age;
    float salary;

 };

int main()
{


struct person h1={34,43543.34};

    struct person h2,h3;


     h2.age=39;
     h2.salary=34553.543;



    h3=h2;


    printf("%d\n",h1.age);
    printf("%d",h3.age);

}
