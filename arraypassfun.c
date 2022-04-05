#include<stdio.h>

struct perror{
  int age;
  char naem[40];
  float salary;

};

     void display(struct perror p)
     {
         printf("Salary is: %f\n",p.salary);
         printf("Salary is: %s\n",p.naem);
         printf("Salary is: %d",p.age);
     }


     int main()
     {
        struct perror person1;
        person1.age=27;
        person1.salary=34.55;
        strcpy(person1.naem,"Al Amin");

        display( person1);
        getch();

     }
