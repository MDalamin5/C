#include<stdio.h>
struct person{
    int age;
    float salary;

 };

int main()
{


struct person h1={34,43543.34};

    struct person h2,h3;


     h2.age=34;
     h2.salary=43543.34;



    h3=h2;



    if(h1.age==h2.age && h1.salary==h3.salary)
        printf("Afe and salary are equal");

        else
        printf("Salary and age are not equal");




}

