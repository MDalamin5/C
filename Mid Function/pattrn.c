#include<stdio.h>
int main()
{
    int i, j, n;
    int count=2;
   int num=1;

    printf("Enter the Number of Row : ");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        if(i==1 || i==2)
        {
            for(j=1; j<=1; j++)
        {
            if(i%2==0)
            {
                printf(" %d ",count);
                count=count+2;
            }
            else{
                printf(" %d ",num);
                num=num+2;
            }


        }

        }

         if(i==3 || i==4)
        {
            for(j=1; j<=2; j++)
        {
            if(i%2==0)
            {
                printf(" %d ",count);
                count=count+2;
            }
            else{
                printf(" %d ",num);
                num=num+2;
            }


        }

        }

         if(i==5 || i==6)
        {
            for(j=1; j<=3; j++)
        {
            if(i%2==0)
            {
                printf(" %d ",count);
                count=count+2;
            }
            else{
                printf(" %d ",num);
                num=num+2;
            }


        }

        }

        printf("\n");
    }
}
