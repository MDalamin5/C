#include<stdio.h>
int main()
{
    int First[10][10], Scend[10][10],Result[10][10];
    int r1,c1,r2,c2,row,col;
    printf("Enter your First matrix row and col: ");
    scanf("%d %d",&r1,&c1);

    printf("Enter your Scend matrix row and col: ");
    scanf("%d %d",&r2,&c2);

    while(r1!=c1)
    {
        printf("please enter equal number row and coloum");
        printf("\n");
        printf("Enter your First matrix row and col: ");
    scanf("%d %d",&r1,&c1);

    printf("Enter your Scend matrix row and col: ");
    scanf("%d %d",&r2,&c2);
    }



    for(row=0; row<r1; row++)
    {
        for(col=0; col<c1; col++)
        {
            printf("First[%d][%d] = ", row,col);

            scanf("%d",&First[row][col]);
        }
    }

    for(row=0; row<r2; row++)
    {
        for(col=0; col<c2; col++)
        {
            printf("Scend[%d][%d] = ", row,col);

            scanf("%d",&Scend[row][col]);
        }
    }

     printf("The First Matrix is: \n");

    for(row=0; row<r1; row++)
    {
        for(col=0; col<c1; col++)
        {
            printf("%d ",First[row][col]);
        }
        printf("\n");
    }

     printf("The Scend Matrix is: ");
     printf("\t");

    for(row=0; row<r2; row++)
    {
        for(col=0; col<c2; col++)
        {

            printf("%d ",Scend[row][col]);
        }
        printf("\n");
    }





}
