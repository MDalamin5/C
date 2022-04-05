#include<stdio.h>
int main()
{
    int num,i,rem,rev_num;
    printf("Enter Your number: ");
    scanf("%d",&num);

    while(num!=0)
    {
        rem=num%10;
        rev_num=rev_num*10 + rem;
        num=num/10;

    }
    int s_num;

    for(i=1;i<4;i++)
    {
        s_num=rev_num%10;
        if(i==1 || i==3)
        {
            printf("%d\n",s_num);
        }
        rev_num=rev_num/10;
    }
}
