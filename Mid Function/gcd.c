#include<stdio.h>
int main()
{

    int num1, num2, num3, lcm;
    int fact=1;
    printf("Enter therr number: ");
    scanf("%d%d%d",&num1, &num2,&num3);



    if(num1>num2 && num1>num3)
    {
        lcm=num1;
    }

    else if(num2>num3 && num2>num1)
    {
        lcm=num2;
    }

   else if(num3>num1 && num3>num2)
    {
        lcm=num3;
    }

    printf("%d\n",lcm);


        while(fact)
    {
        if(lcm%num1==0 && lcm%num2==0 && lcm%num3==0)
        {
            printf("LCm is %d",lcm);
            fact=0;
        }
        lcm++;
    }



}
