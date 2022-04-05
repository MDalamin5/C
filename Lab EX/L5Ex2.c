#include<stdio.h>
int main()

{
    int num1,num2;
    printf("Enter Two Integer: ");
    scanf("%d%d",&num1,&num2);

    switch(num1>num2)
    {
    case 1:
        printf("%d Is maximum",num1);
        break;

    case 0:
        printf("%d is maximum",num2);
        break;



    }


}
