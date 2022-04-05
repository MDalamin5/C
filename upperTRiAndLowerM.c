#include<stdio.h>
int main()
{
    int A[10][10],row,col,i,j,ups=0,lps=0;
    printf("Enter Your MAtrix Row And Coloum: ");
    scanf("%d %d",&row,&col);

    for(i=0;i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            printf("A[%d][%d]= ",i,j);
        scanf("%d",&A[i][j]);
        }

    }

    printf("Your Entering Matrix Is: \n");

    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            printf("%d ",A[i][j]);

        }
        printf("\n");
    }


    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            if(j>i)
            {
                ups=ups+ A[i][j];
            }
            if(j<i)
            {
                lps=lps+ A[i][j];
            }


        }


    }
    printf("The upper sum is : %d \n",ups);
        printf("The lower sum is : %d \n",lps);









}
