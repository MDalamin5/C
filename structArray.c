    #include<stdio.h>

    struct Person{

     int age;
     float salary;

     };

        int main()
        {
            struct Person person[4];

            int i;

            for(i=0;i<4;i++)
            {
                printf("Enter Person %d Information: \n",i+1);
                printf("Enter age: ");
                scanf("%d",&person[i].age);
                printf("Enter Person Salary: ");
                scanf("%f",&person[i].salary);
            }


            for(i=0;i<4;i++)
            {
                printf("Person:%d Information is\n",i+1);
                printf("Age is: %d\n",person[i].age);
                printf("Salary is: %.2f\n",person[i].salary);


            }
        }
