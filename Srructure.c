#include<stdio.h>
 struct person{
 int age;
 float salary;
 };
    struct person h1,h2;

 int main()
 {
    //struct person h1,h2;

    h1.age=34;
    h1.salary=1299.45;

    h2.age=45;
    h2.salary=45999;

        printf(" Person 1 informations: \n");
    printf("Age is: %d\n",h1.age);
    printf("Salary IS: %.2f\n",h1.salary);

    printf("Age is: %d\n",h2.age);
    printf("Salary IS: %.2f\n",h2.salary);




  getch() ;
 }
