#include<stdio.h>
int main()
{
    int A[10][10],i,j,row,col,sum=0;
    printf("Enter Your matrix Row and Coloum: ");
    scanf("%d %d",&row,&col);

    for(i=0;i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            printf("A[%d][%d]= ",i,j);
        scanf("%d",&A[i][j]);
        }

    }

    printf("\n your Entering Matrix is: \n");

    for(i=0; i<row; i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }

    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            if(i==j)
            {
                printf(" Digonal elements is : %d ",A[i][j]);
                sum=sum+A[i][j];
            }
        }
    }

    printf(" \nYour digonal sum is: %d",sum);




}
