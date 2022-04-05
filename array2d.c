#include<stdio.h>
int main()
{
    int row,col;
    int A[3][4];
    for(row=0;row<3;row++)
    {
        for(col=0;col<4;col++)
        {
            printf("A[%d][%d] = ", row,col);
            scanf("%d",&A[row][col]);
        }

    }
  for(row=0;row<3;row++)
    {
        for(col=0;col<4;col++)
        {
            printf("%d ",A[row][col]);

        }
         printf("\n");
    }











}
