#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Enter the number of N: ");
    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=i; j++)
        {
            if(i==1 || i==j || i==n || j==1)
            {
                printf("*");
            }
            else
                printf(" ");
        }
        printf("\n");
    }
}
