#include<stdio.h>
int main()
{
    int row,col,nor,noc;
    int A[10][10],B[10][10],C[10][10];
    printf("Enter your number of row and colum: ");
    scanf("%d %d",&nor,&noc);

    printf("The A matrix is: ");
    printf("\n");

    for(row=0;row<nor;row++)
    {

        for(col=0;col<noc;col++)
        {
            printf("A[%d][%d] = ", row,col);
            scanf("%d",&A[row][col]);
        }

    }

    for(row=0;row<nor;row++)
    {
        for(col=0;col<noc;col++)
        {
          printf("%d ",A[row][col]);
        }
        printf("\n");

    }

    //the B matrix is:

    printf("The A matrix is: ");
    printf("\n");

    for(row=0;row<nor;row++)
    {

        for(col=0;col<noc;col++)
        {
            printf("B[%d][%d] = ", row,col);
            scanf("%d",&B[row][col]);
        }

    }

    for(row=0;row<nor;row++)
    {
        for(col=0;col<noc;col++)
        {
          printf("%d ",B[row][col]);
        }
        printf("\n");

    }

    //the addiation of two matrix:

    for(row=0; row<nor;row++)
    {
        for(col=0;col<noc;col++)
        {
            C[row][col]=A [row][col] + B[row][col];

        }
    }

   printf("The Addiation of C matrix: ");
   printf("\n");
    for(row=0;row<nor;row++)
    {
        for(col=0;col<noc;col++)
        {
          printf("%d ",C[row][col]);
        }
        printf("\n");

    }









}
